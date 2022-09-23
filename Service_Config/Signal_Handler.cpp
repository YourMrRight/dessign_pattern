#include "ace/OS.h"
#include "ace/Service_Config.h"
#include "ace/Event_Handler.h"
#include "ace/Reactor.h"
#include <signal.h>
// The Signal Handler which is used to issue the reconfigure()
// call on the service configurator.
class Signal_Handler : public ACE_Event_Handler
{
public:
    int open()
    {
        // register the Signal Handler with the Reactor to handle
        // re-configuration signals
        ACE_Reactor::instance()->register_handler(SIGWINCH, this);
        return 0;
    }
    int handle_signal(int signum, void *, ucontext_t *)
    {
        if (signum == SIGWINCH)
            ACE_Service_Config::reconfigure();
        return 0;
    }
};
int main(int argc, char *argv[])
{
    // Instantiate and start up the Signal Handler. This is uses to
    // handle re-configuration events.

    ACE_Service_Config::reconfigure();
    sleep(100000);
}