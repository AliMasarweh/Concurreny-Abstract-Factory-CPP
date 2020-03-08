//
// Created by ali-masa on 3/8/20.
//

#ifndef PLATFORMINDEPENTCONCURENCY_LINUX_FACTORY_H
#define PLATFORMINDEPENTCONCURENCY_LINUX_FACTORY_H


#include "concurency_abstract_factory.h"

class LinuxFactory : public ConcurrencyAbstractFactory
{
public:
    virtual Thread *createThread();
    virtual Mutex *createMutex();
};


#endif //PLATFORMINDEPENTCONCURENCY_LINUX_FACTORY_H
