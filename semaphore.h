//
// Created by ali-masa on 3/19/20.
//

#ifndef PLATFORMINDEPENTCONCURENCY_SEMAPHORE_H
#define PLATFORMINDEPENTCONCURENCY_SEMAPHORE_H


class Semaphore
{
public:
    Semaphore(unsigned char threadsNum) :m_threadsNum(threadsNum) {}
    virtual void wait() = 0;
    virtual void post() = 0;
    virtual void tryWait() = 0;
    virtual void timedWait(size_t nanoSeconds) = 0;

protected:
    unsigned char m_threadsNum;
};


#endif //PLATFORMINDEPENTCONCURENCY_SEMAPHORE_H
