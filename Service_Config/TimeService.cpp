#include "TimeService.h"

int TimeService::init(int argc, char *argv[])
{
    ACE_DEBUG((LM_DEBUG, "(%t)Starting up the time Service\n"));
    mutex_ = new ACE_Thread_Mutex;
    cancel_cond_ = new ACE_Condition<ACE_Thread_Mutex>(*mutex_);
    activate(THR_NEW_LWP | THR_DETACHED);
    return 0;
}
int TimeService::fini(void)
{
    ACE_DEBUG((LM_DEBUG,
               "(%t)FINISH!Closing down the Time Service\n"));
    canceled_ = 1;
    mutex_->acquire();
    while (canceled_)
        cancel_cond_->wait();
    mutex_->release();
    ACE_DEBUG((LM_DEBUG, "(%t)Time Service is exiting \n"));
}
int TimeService::suspend(void)
{
    ACE_DEBUG((LM_DEBUG, "(%t)Time Service has been suspended\n"));
    int result = ACE_Task_Base::suspend();
    return result;
}
int TimeService::resume(void)
{
    ACE_DEBUG((LM_DEBUG, "(%t)Resuming Time Service\n"));
    int result = ACE_Task_Base::resume();
    return result;
}
int TimeService::svc(void)
{
    char *time = new char[36];
    while (!canceled_)
    {
        ACE::timestamp(time, 36);
        ACE_DEBUG((LM_DEBUG, "(%t)Current time is %s\n", time));
        ACE_OS::fflush(stdout);
        ACE_OS::sleep(1);
    }
    canceled_ = 0;
    cancel_cond_->signal();
    ACE_DEBUG((LM_DEBUG,
               "Signalled main task that Time Service is exiting \n"));
    return 0;
}