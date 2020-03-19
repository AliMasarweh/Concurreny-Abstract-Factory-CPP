//
// Created by ali-masa on 3/8/20.
//

#ifdef __linux__

#include "linux_concurrency_abstract_factory.h"
#include "linux_thread.h"
#include "linux_mutex.h"
#include "linux_message_queue.h"
#include "linux_semaphore.h"

LinuxConcurrencyAbstractFactory LinuxConcurrencyAbstractFactory::s_linux_singleton_factory;

Thread *LinuxConcurrencyAbstractFactory::createThread(void* (*func_to_execute)(void *), void *args)
{
    return new LinuxThread(func_to_execute, args);
}

Mutex *LinuxConcurrencyAbstractFactory::createMutex()
{
    return new LinuxMutex();
}

MessageQueue *LinuxConcurrencyAbstractFactory::createMessageQueue()
{
    return new LinuxMessageQueue();
}

LinuxConcurrencyAbstractFactory::LinuxConcurrencyAbstractFactory() {}

ConcurrencyAbstractFactory *LinuxConcurrencyAbstractFactory::getInstance()
{
    return &s_linux_singleton_factory;
}

Semaphore *LinuxConcurrencyAbstractFactory::createSemaphore(unsigned char threadsNum) {
    return new LinuxSemaphore(threadsNum);
}

#endif //__linux__
