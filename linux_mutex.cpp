//
// Created by ali-masa on 3/8/20.
//

#include <pthread.h>
#include "linux_mutex.h"

void LinuxMutex::lock()
{
    pthread_mutex_lock(&m_mutex);
}

void LinuxMutex::unlock()
{
    pthread_mutex_unlock(&m_mutex);
}
