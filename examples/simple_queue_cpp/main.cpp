#include <iostream>
#include "simple_queue.hpp"

const __UINT32_TYPE__ queue_len = 100;

int main(int argc, char* agrv[]) {
    std::cout<<"Simple Queue"<<std::endl;
    SimpleQueue simple_q(queue_len);
    
    std::cout<<"Writing: ";
    for (int i = -5; i < 5; i++) {
        std::cout<<i<<" ";
        simple_q.Write(i);
    }

    std::cout<<std::endl<<"Reading: ";

    for (int i = 0; i < 10; i++) {
        std::cout<<simple_q.Read()<<" ";
    }
    std::cout<<std::endl;

    return 0;
}
