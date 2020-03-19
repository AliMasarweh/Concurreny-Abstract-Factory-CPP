//
// Created by ali-masa on 3/8/20.
//

#include "concurrency_abstract_factory.h"
#include "linux_concurrency_abstract_factory.h"

ConcurrencyAbstractFactory *ConcurrencyAbstractFactory::getInstance()
{
#ifdef __linux__
    return LinuxConcurrencyAbstractFactory::getInstance();
#else
    // windows
    return NULL
#endif
}

Mutex::Lock ConcurrencyAbstractFactory::createLock(Mutex* mutex)
{
    return Mutex::Lock(mutex);
}

