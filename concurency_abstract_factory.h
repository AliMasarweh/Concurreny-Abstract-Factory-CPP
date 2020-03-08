//
// Created by ali-masa on 3/8/20.
//

#ifndef PLATFORMINDEPENTCONCURENCY_CONCURENCY_ABSTRACT_FACTORY_H
#define PLATFORMINDEPENTCONCURENCY_CONCURENCY_ABSTRACT_FACTORY_H

class Thread;
class Mutex;

class ConcurrencyAbstractFactory
{
public:
    virtual Thread* createThread() = 0;
    virtual Mutex* createMutex() = 0;
    virtual ~ConcurrencyAbstractFactory() {}
};

#endif //PLATFORMINDEPENTCONCURENCY_CONCURENCY_ABSTRACT_FACTORY_H
