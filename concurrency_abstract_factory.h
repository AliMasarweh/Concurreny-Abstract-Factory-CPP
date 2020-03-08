//
// Created by ali-masa on 3/8/20.
//

#ifndef PLATFORMINDEPENTCONCURENCY_CONCURRENCY_ABSTRACT_FACTORY_H
#define PLATFORMINDEPENTCONCURENCY_CONCURRENCY_ABSTRACT_FACTORY_H

class Thread;
class Mutex;
class MessageQueue;

class ConcurrencyAbstractFactory
{
public:
    virtual Thread* createThread() = 0;
    virtual Mutex* createMutex() = 0;
    virtual MessageQueue* createMessageQueue() = 0;
    virtual ~ConcurrencyAbstractFactory() {}

    static ConcurrencyAbstractFactory* getInstance();
};

#endif //PLATFORMINDEPENTCONCURENCY_CONCURRENCY_ABSTRACT_FACTORY_H
