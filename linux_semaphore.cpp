//
// Created by ali-masa on 3/19/20.
//

#include <bits/time.h>
#include <time.h>
#include "linux_semaphore.h"


LinuxSemaphore::LinuxSemaphore(size_t threadsNum) :Semaphore(threadsNum)
{
    sem_init(&m_semaphore, 0, m_threadsNum);
}


LinuxSemaphore::LinuxSemaphore(const LinuxSemaphore &topCopy) :Semaphore(topCopy.m_threadsNum)
{
    sem_init(&m_semaphore, 0, m_threadsNum);
}

void LinuxSemaphore::wait()
{
    sem_wait(&m_semaphore);
}

void LinuxSemaphore::post()
{
    sem_post(&m_semaphore);
}

void LinuxSemaphore::tryWait()
{
    sem_trywait(&m_semaphore);
}

void LinuxSemaphore::timedWait(size_t nanoSeconds)
{
    timespec ts;
    clock_gettime(CLOCK_REALTIME, &ts);
    ts.tv_nsec += nanoSeconds;
    sem_timedwait(&m_semaphore, &ts);
}

LinuxSemaphore::~LinuxSemaphore()
{
    sem_destroy(&m_semaphore);
}
