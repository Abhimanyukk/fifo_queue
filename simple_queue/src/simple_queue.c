/**
 * @file simple_queue.c
 * @author Abhimanyu KK
 * @brief Simple queue C file
 * @version 0.1
 * @date 2022-10-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "simple_queue.h"

void SimpleQueueInit(simple_queue_t *queue_p, __UINT32_TYPE__ len)
{
    queue_p->buff = (__UINT8_TYPE__ *)malloc(sizeof(__UINT8_TYPE__) * len);
    queue_p->pos = 0;
}

void QueueWrite(simple_queue_t *queue_p, __UINT8_TYPE__ data)
{
    queue_p->buff[queue_p->pos++] = data;
}

__UINT8_TYPE__ QueueRead(simple_queue_t *queue_p)
{   
    if (queue_p->pos > 0) {
        __UINT8_TYPE__ ret = queue_p->buff[0];

        for(int index = 0; index < queue_p->pos; index++)
        {
            queue_p->buff[index] = queue_p->buff[index + 1];
        }
        
        queue_p->pos--;
        return ret;
    }

    return 0;
}