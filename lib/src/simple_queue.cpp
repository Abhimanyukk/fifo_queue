#include "simple_queue.hpp"
#include <iostream>
#include <stdio.h>

SimpleQueue::SimpleQueue(__UINT32_TYPE__ q_len) {
    q_buff = (__INT32_TYPE__*)malloc(sizeof(__INT32_TYPE__) * q_len);
    q_pos = 0;
}

void SimpleQueue::Write(__INT32_TYPE__ data) {
    q_buff[q_pos++] = data;
}

__INT32_TYPE__ SimpleQueue::Read(void) {
    if (q_pos < 0) {
        return 0;
    }

    __INT32_TYPE__ ret = q_buff[0];
    for (int index = 0; index < q_pos; index++) {
        q_buff[index] = q_buff[index + 1];
    }
    q_pos--;
    return ret;
}