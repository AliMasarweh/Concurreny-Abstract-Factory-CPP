//
// Created by ali-masa on 3/8/20.
//

#ifndef PLATFORMINDEPENTCONCURENCY_THREAD_H
#define PLATFORMINDEPENTCONCURENCY_THREAD_H

class Thread
{
public:
    Thread(void* (*func_to_execute)(void *), void *args)
    :m_threadFuncPntr(func_to_execute), m_args(args){}
    virtual void* join() = 0;
    virtual ~Thread() {}

private:
    void* (*m_threadFuncPntr)(void *);
    void* m_args;
protected:
    bool m_hasJoined;
};

#endif //PLATFORMINDEPENTCONCURENCY_THREAD_H
