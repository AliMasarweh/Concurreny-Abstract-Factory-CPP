//
// Created by ali-masa on 3/8/20.
//

#ifndef PLATFORMINDEPENTCONCURENCY_CONCURRENCY_ABSTRACT_FACTORY_H
#define PLATFORMINDEPENTCONCURENCY_CONCURRENCY_ABSTRACT_FACTORY_H

#include "semaphore.h"

class Thread;
class Mutex;
class MessageQueue;

class ConcurrencyAbstractFactory
{
public:
    virtual Thread* createThread(void* (*func_to_execute)(void *), void *args) = 0;
    virtual Mutex* createMutex() = 0;
    virtual MessageQueue* createMessageQueue() = 0;
    virtual Semaphore* createSemaphore(unsigned char threadsNum) = 0;
    virtual ~ConcurrencyAbstractFactory() {}

    static ConcurrencyAbstractFactory* getInstance();
};

#endif //PLATFORMINDEPENTCONCURENCY_CONCURRENCY_ABSTRACT_FACTORY_H
