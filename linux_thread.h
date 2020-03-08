//
// Created by ali-masa on 3/8/20.
//

#ifndef PLATFORMINDEPENTCONCURENCY_LINUX_THREAD_H
#define PLATFORMINDEPENTCONCURENCY_LINUX_THREAD_H


#include <sys/types.h>
#include "thread.h"

class LinuxThread : public Thread
{
public:
    LinuxThread();
    virtual void run(void* (*func_to_execute)(void*), void* args);
    virtual void *join();

private:
    pthread_t m_thread;
};


#endif //PLATFORMINDEPENTCONCURENCY_LINUX_THREAD_H
