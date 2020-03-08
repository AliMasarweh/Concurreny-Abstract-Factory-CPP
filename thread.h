//
// Created by ali-masa on 3/8/20.
//

#ifndef PLATFORMINDEPENTCONCURENCY_THREAD_H
#define PLATFORMINDEPENTCONCURENCY_THREAD_H

class Thread
{
public:
    virtual void run() = 0;
    virtual void* join() = 0;
    virtual ~Thread() {}
};

#endif //PLATFORMINDEPENTCONCURENCY_THREAD_H
