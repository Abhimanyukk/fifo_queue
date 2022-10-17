/**
 * @file ring_queue.c
 * @author Abhimanyu KK
 * @brief Ring queue script
 * @version 0.1
 * @date 2022-10-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "ring_queue.h"

void RingQueueInit(ring_queue_t *queue_p, __UINT32_TYPE__ len)
{
    queue_p->buff = (__UINT8_TYPE__ *)malloc(sizeof(__UINT8_TYPE__) * len);
    queue_p->r_index = 0;
    queue_p->w_index = 0;
    queue_p->len = len;
}

void RingQueueWrite(ring_queue_t *queue_p, __UINT8_TYPE__ data)
{
    if (queue_p->w_index > queue_p->len) {
        queue_p->w_index = 0;
    }

    queue_p->buff[queue_p->w_index++] = data;
}

__UINT8_TYPE__ RingQueueRead(ring_queue_t *queue_p)
{
    if (queue_p->r_index <= queue_p->w_index) {
        if (queue_p->r_index > queue_p->len) {
            queue_p->r_index = 0;
        }
        return (queue_p->buff[queue_p->r_index++]);
    }
    return 0;
}