//
// Created by ali-masa on 3/8/20.
//

#ifdef __linux__

#include <pthread.h>
#include "linux_mutex.h"

LinuxMutex::LinuxMutex()
{
    pthread_mutex_init(&m_mutex, NULL);
}


LinuxMutex::LinuxMutex(const LinuxMutex &toCopy)
{
    pthread_mutex_init(&m_mutex, NULL);
}

LinuxMutex &LinuxMutex::operator=(const LinuxMutex &toCopy)
{
    pthread_mutex_destroy(&m_mutex);
    pthread_mutex_init(&m_mutex, NULL);
    return *this;
}

void LinuxMutex::lock()
{
    pthread_mutex_lock(&m_mutex);
}


void LinuxMutex::tryLock()
{
    pthread_mutex_trylock(&m_mutex);
}


void LinuxMutex::unlock()
{
    pthread_mutex_unlock(&m_mutex);
}

LinuxMutex::~LinuxMutex()
{
    pthread_mutex_destroy(&m_mutex);
}

#endif
