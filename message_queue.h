//
// Created by ali-masa on 3/8/20.
//

#ifndef PLATFORMINDEPENTCONCURENCY_MESSAGE_QUEUE_H
#define PLATFORMINDEPENTCONCURENCY_MESSAGE_QUEUE_H

#include <cstddef>

class MessageQueue
{
public:
    virtual void open(const char* name, int flags, int pMode, unsigned int maxMessages,
                      unsigned char maxMessageLength) = 0;
    virtual size_t receive(char buff[], size_t len, unsigned int* priority) = 0;
    virtual int send(const char message[], size_t len, unsigned int priority) = 0;
    virtual ~MessageQueue() {}
};

#endif //PLATFORMINDEPENTCONCURENCY_MESSAGE_QUEUE_H
