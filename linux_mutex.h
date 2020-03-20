//
// Created by ali-masa on 3/8/20.
//

#ifndef PLATFORMINDEPENTCONCURENCY_LINUX_MUTEX_H
#define PLATFORMINDEPENTCONCURENCY_LINUX_MUTEX_H

#ifdef __linux__

#include <sys/types.h>
#include "mutex.h"

class LinuxMutex : public Mutex
{
public:
    LinuxMutex();
    LinuxMutex(const LinuxMutex& toCopy);
    LinuxMutex& operator=(const LinuxMutex& toCopy);
    virtual void lock();
    virtual void tryLock();
    virtual void unlock();

    ~LinuxMutex();

private:
    pthread_mutex_t m_mutex;
};

#endif //__linux__

#endif //PLATFORMINDEPENTCONCURENCY_LINUX_MUTEX_H
