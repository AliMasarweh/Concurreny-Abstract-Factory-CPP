//
// Created by ali-masa on 3/8/20.
//

#include <clocale>
#include <pthread.h>
#include <unistd.h>
#include "linux_thread.h"


LinuxThread::LinuxThread() {}

void LinuxThread::run(void* (*func_to_execute)(void *), void *args)
{
    pthread_create(&m_thread, NULL, func_to_execute, args);
}

void *LinuxThread::join()
{
    void** res;
    pthread_join(m_thread, res);
    return *res;
}
