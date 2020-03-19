//
// Created by ali-masa on 3/8/20.
//

#ifndef PLATFORMINDEPENTCONCURENCY_LINUX_CONCURRENCY_ABSTRACT_FACTORY_H
#define PLATFORMINDEPENTCONCURENCY_LINUX_CONCURRENCY_ABSTRACT_FACTORY_H

#ifdef __linux__

#include "concurrency_abstract_factory.h"

class LinuxConcurrencyAbstractFactory : public ConcurrencyAbstractFactory
{
public:
    Thread *createThread(void* (*func_to_execute)(void *), void *args);
    Mutex *createMutex();
    MessageQueue *createMessageQueue();
    Semaphore *createSemaphore(unsigned char threadsNum);

    static ConcurrencyAbstractFactory* getInstance();

private:
    LinuxConcurrencyAbstractFactory();
    static LinuxConcurrencyAbstractFactory s_linux_singleton_factory;
};

#endif //__linux__

#endif //PLATFORMINDEPENTCONCURENCY_LINUX_CONCURRENCY_ABSTRACT_FACTORY_H
