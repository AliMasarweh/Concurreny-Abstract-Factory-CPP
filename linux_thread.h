//
// Created by ali-masa on 3/8/20.
//

#ifndef PLATFORMINDEPENTCONCURENCY_LINUX_THREAD_H
#define PLATFORMINDEPENTCONCURENCY_LINUX_THREAD_H

#ifdef __linux__

#include <sys/types.h>
#include "thread.h"

class LinuxThread : public Thread
{
public:
    LinuxThread(void* (*func_to_execute)(void *), void *args);
    virtual void *join();

    ~LinuxThread();

private:
    LinuxThread(const LinuxThread&);
    LinuxThread& operator=(const LinuxThread& );

    pthread_t m_thread;
};

#endif //__linux__

#endif //PLATFORMINDEPENTCONCURENCY_LINUX_THREAD_H
