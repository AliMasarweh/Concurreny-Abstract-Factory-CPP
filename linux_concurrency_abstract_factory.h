//
// Created by ali-masa on 3/8/20.
//

#ifndef PLATFORMINDEPENTCONCURENCY_LINUX_CONCURRENCY_ABSTRACT_FACTORY_H
#define PLATFORMINDEPENTCONCURENCY_LINUX_CONCURRENCY_ABSTRACT_FACTORY_H


#include "concurrency_abstract_factory.h"

class LinuxConcurrencyAbstractFactory : public ConcurrencyAbstractFactory
{
public:
    virtual Thread *createThread();
    virtual Mutex *createMutex();
    virtual MessageQueue *createMessageQueue();
};


#endif //PLATFORMINDEPENTCONCURENCY_LINUX_CONCURRENCY_ABSTRACT_FACTORY_H
