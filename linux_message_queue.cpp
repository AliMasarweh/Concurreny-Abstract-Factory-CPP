//
// Created by ali-masa on 3/8/20.
//

#include <mqueue.h>
#include "linux_message_queue.h"


LinuxMessageQueue::LinuxMessageQueue(const char* name, int flags, int pMode, unsigned int maxMessages,
        unsigned char maxMessageLength): m_name(name)
{
    m_attr.mq_maxmsg = 6;
    m_attr.mq_msgsize = 20;
    m_mq = mq_open(m_name,  flags, pMode, &m_attr);
}


size_t LinuxMessageQueue::receive(char buff[], size_t len, unsigned int* priority)
{
    return mq_receive(m_mq, buff, len, priority);
}

int LinuxMessageQueue::send(const char *message, size_t len, unsigned int priority)
{
    return mq_send(m_mq, message, len, priority);
}
