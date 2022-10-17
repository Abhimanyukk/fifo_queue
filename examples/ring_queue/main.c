/**
 * @file ring_queue_ex.c
 * @author Abhimanyu KK
 * @brief Ring queue example
 * @version 0.1
 * @date 2022-10-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include "ring_queue.h"

void main()
{
    printf("RING QUEUE\n");

    ring_queue_t que;
    RingQueueInit(&que, 100);
    
    for (int i = 0; i < 10; i++) {
        RingQueueWrite(&que, i);
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", RingQueueRead(&que));
    }
}