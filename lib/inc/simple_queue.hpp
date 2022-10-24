#ifndef _SIMPLE_QUEUE_HPP_
#define _SIMPLE_QUEUE_HPP_

class SimpleQueue {
    
private:
    __INT32_TYPE__ *q_buff;
    __UINT32_TYPE__ q_pos;

public:
    SimpleQueue(__UINT32_TYPE__ len);
    void Write(__INT32_TYPE__ data);
    __INT32_TYPE__ Read(void);
};


#endif /* _SIMPLE_QUEUE_HPP_ */
