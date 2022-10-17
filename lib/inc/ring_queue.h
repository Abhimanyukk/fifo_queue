/**
 * @file ring_queue.h
 * @author Abhimanyu KK
 * @brief Ring queue header file
 * @version 0.1
 * @date 2022-10-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdlib.h>

typedef struct RingQueue
{
    __UINT8_TYPE__ *buff;
    __UINT32_TYPE__ len;
    __UINT32_TYPE__ r_index;
    __UINT32_TYPE__ w_index;
} ring_queue_t;

void RingQueueInit(ring_queue_t *queue_p, __UINT32_TYPE__ len);
void RingQueueWrite(ring_queue_t *queue_p, __UINT8_TYPE__ data);
__UINT8_TYPE__ RingQueueRead(ring_queue_t *queue_p);
