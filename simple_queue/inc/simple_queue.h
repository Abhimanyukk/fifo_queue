/**
 * @file simple_queue.h
 * @author Abhimanyu KK
 * @brief Simple Queue Header file
 * @version 0.1
 * @date 2022-10-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdlib.h>

typedef struct SimleQueue {
    __UINT8_TYPE__ *buff;
    __UINT32_TYPE__ pos;
} simple_queue_t;

void SimpleQueueInit(simple_queue_t *queue_p, __UINT32_TYPE__ len);
void QueueWrite(simple_queue_t *queue_p, __UINT8_TYPE__ data);
__UINT8_TYPE__ QueueRead(simple_queue_t *queue_p);
