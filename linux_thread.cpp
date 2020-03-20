//
// Created by ali-masa on 3/8/20.
//

#ifdef __linux__

#include <clocale>
#include <pthread.h>
#include <unistd.h>
#include "linux_thread.h"


LinuxThread::LinuxThread(void *(*func_to_execute)(void *), void *args) :
    Thread(func_to_execute, args), m_thread()
{
    pthread_create(&m_thread, NULL, func_to_execute, args);
}

void *LinuxThread::join()
{
    m_hasJoined = true;
    void* res;
    pthread_join(m_thread, &res);

    return res;
}

LinuxThread::~LinuxThread()
{
    if(!m_hasJoined)
        pthread_detach(m_thread);
}

LinuxThread::LinuxThread(const LinuxThread & thread): Thread(thread.m_threadFuncPntr, thread.m_args) {}

LinuxThread &LinuxThread::operator=(const LinuxThread &) { return *this; }

#endif
