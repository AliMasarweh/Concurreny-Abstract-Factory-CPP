//
// Created by ali-masa on 3/19/20.
//

#ifndef PLATFORMINDEPENTCONCURENCY_LINUX_SEMAPHORE_H
#define PLATFORMINDEPENTCONCURENCY_LINUX_SEMAPHORE_H


#include <semaphore.h>
#include "semaphore.h"

class LinuxSemaphore : public Semaphore {
public:
    LinuxSemaphore(size_t threadsNum);
    LinuxSemaphore(const LinuxSemaphore& topCopy);
    LinuxSemaphore& operator=(const LinuxSemaphore& topCopy);
    virtual void wait();
    virtual void post();
    virtual void tryWait();
    virtual void timedWait(size_t nanoSeconds);

    ~LinuxSemaphore();

private:
    sem_t m_semaphore;
};


#endif //PLATFORMINDEPENTCONCURENCY_LINUX_SEMAPHORE_H
