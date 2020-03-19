//
// Created by ali-masa on 3/8/20.
//

#ifndef PLATFORMINDEPENTCONCURENCY_MUTEX_H
#define PLATFORMINDEPENTCONCURENCY_MUTEX_H

class Mutex
{
public:
    virtual void lock() = 0;
    virtual void tryLock() = 0;
    virtual void unlock() = 0;
    virtual ~Mutex() {}

    class Lock
    {
    public:
        Lock(Mutex* mutex) :m_lock(mutex){ m_lock->lock(); }
        ~Lock(){ m_lock->unlock(); }
    protected:
        Mutex* m_lock;
    };
};

#endif //PLATFORMINDEPENTCONCURENCY_MUTEX_H
