//
// Created by ali-masa on 3/8/20.
//

#ifndef PLATFORMINDEPENTCONCURENCY_LINUX_MUTEX_H
#define PLATFORMINDEPENTCONCURENCY_LINUX_MUTEX_H


#include <sys/types.h>
#include "mutex.h"

class LinuxMutex : public Mutex
{
public:
    virtual void lock();
    virtual void unlock();

private:
    pthread_mutex_t m_mutex;
};


#endif //PLATFORMINDEPENTCONCURENCY_LINUX_MUTEX_H
