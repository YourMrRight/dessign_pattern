#if !defined(MY_SERVICE_H)
#define MY_SERVICE_H
#include "ace/OS.h"
#include "ace/Task.h"

#include <ace/Synch.h>


class TimeService : public ACE_Task_Base
{
public:
    virtual int init(int argc, char *argv[]);
    virtual int fini(void);
    virtual int suspend(void);
    virtual int resume(void);
    virtual int svc(void);

private:
    int canceled_;
    ACE_Condition<ACE_Thread_Mutex> *cancel_cond_;
    ACE_Thread_Mutex *mutex_;
};

#endif