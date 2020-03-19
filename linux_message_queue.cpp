//
// Created by ali-masa on 3/8/20.
//

#ifdef __linux__

#include <mqueue.h>
#include "linux_message_queue.h"

LinuxMessageQueue::LinuxMessageQueue() {}

size_t LinuxMessageQueue::receive(char buff[], size_t len, unsigned int* priority)
{
    return mq_receive(m_mq, buff, len, priority);
}

int LinuxMessageQueue::send(const char *message, size_t len, unsigned int priority)
{
    return mq_send(m_mq, message, len, priority);
}

LinuxMessageQueue::~LinuxMessageQueue()
{
    mq_unlink(m_name);
    mq_close(m_mq);
}

void LinuxMessageQueue::open(const char *name, int flags, int pMode, unsigned int maxMessages,
                             unsigned char maxMessageLength) {
    m_name = name;
    m_attr.mq_maxmsg = maxMessages;
    m_attr.mq_msgsize = maxMessageLength;
    m_mq = mq_open(m_name,  flags, pMode, &m_attr);
}

#endif
