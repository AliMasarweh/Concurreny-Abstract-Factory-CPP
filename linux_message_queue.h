//
// Created by ali-masa on 3/8/20.
//

#ifndef PLATFORMINDEPENTCONCURENCY_LINUX_MESSAGE_QUEUE_H
#define PLATFORMINDEPENTCONCURENCY_LINUX_MESSAGE_QUEUE_H


#include "message_queue.h"

class LinuxMessageQueue : public MessageQueue
{
public:
    LinuxMessageQueue(const char* name, int flags, int pMode, unsigned int maxMessages, unsigned char maxMessageLength);
    virtual size_t receive(char *buff, size_t len, unsigned int* priority);
    virtual int send(const char *message, size_t len, unsigned int priority);
    virtual ~LinuxMessageQueue();

private:
    const char* m_name;
    mq_attr m_attr;
    mqd_t m_mq;
};


#endif //PLATFORMINDEPENTCONCURENCY_LINUX_MESSAGE_QUEUE_H
