//
// Created by ali-masa on 3/8/20.
//


#include "linux_concurrency_abstract_factory.h"
#include "linux_thread.h"
#include "linux_mutex.h"
#include "linux_message_queue.h"

LinuxConcurrencyAbstractFactory LinuxConcurrencyAbstractFactory::s_linux_singleton_factory;

Thread *LinuxConcurrencyAbstractFactory::createThread()
{
    return new LinuxThread();
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
