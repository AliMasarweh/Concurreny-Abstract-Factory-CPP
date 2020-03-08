//
// Created by ali-masa on 3/8/20.
//

#include <clocale>
#include "linux_factory.h"
#include "linux_thread.h"
#include "linux_mutex.h"

Thread *LinuxFactory::createThread()
{
    return new LinuxThread();
}

Mutex *LinuxFactory::createMutex()
{
    return new LinuxMutex();
}
