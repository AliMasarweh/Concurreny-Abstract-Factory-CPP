//
// Created by ali-masa on 3/8/20.
//

#ifndef PLATFORMINDEPENTCONCURENCY_LINUX_CONCURRENCY_ABSTRACT_FACTORY_H
#define PLATFORMINDEPENTCONCURENCY_LINUX_CONCURRENCY_ABSTRACT_FACTORY_H

#include "concurrency_abstract_factory.h"

class LinuxConcurrencyAbstractFactory : public ConcurrencyAbstractFactory
{
public:
    Thread *createThread();
    Mutex *createMutex();
    MessageQueue *createMessageQueue();
    static ConcurrencyAbstractFactory* getInstance();

private:
    LinuxConcurrencyAbstractFactory();
    static LinuxConcurrencyAbstractFactory s_linux_singleton_factory;
};


#endif //PLATFORMINDEPENTCONCURENCY_LINUX_CONCURRENCY_ABSTRACT_FACTORY_H
