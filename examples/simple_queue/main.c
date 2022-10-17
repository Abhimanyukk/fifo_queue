/**
 * @file main.c
 * @author Abhimanyu KK
 * @brief Example of how can queue used in application
 * @version 0.1
 * @date 2022-10-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include "simple_queue.h"


void main() {
    printf("Simple Queue\n");
    simple_queue_t s_queue;
    SimpleQueueInit(&s_queue, 100);
    for (int i = 0; i < 10; i++) {
        SimpleQueueWrite(&s_queue, i);
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", SimpleQueueRead(&s_queue));
    }
}
