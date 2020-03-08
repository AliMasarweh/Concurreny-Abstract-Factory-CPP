//
// Created by ali-masa on 3/8/20.
//

#ifndef PLATFORMINDEPENTCONCURENCY_MUTEX_H
#define PLATFORMINDEPENTCONCURENCY_MUTEX_H

class Mutex
{
public:
    virtual void lock() = 0;
    virtual void unlock() = 0;
    virtual ~Mutex() {}
};

#endif //PLATFORMINDEPENTCONCURENCY_MUTEX_H
