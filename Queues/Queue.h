#ifndef _Queue_h
#define _Queue_h

/*
    Queue.h
        
    Class definition for the Queue class

    Queues assignment

    Author:
*/

#include <cstdlib>

class Queue {
public:
    // max elements in queue
    static const size_t ARRAY_SZ = 5;

    Queue();

    bool enqueue(char c);
    bool dequeue();
    char front();
    bool is_empty();
    bool is_full();

private:
    char _data[ARRAY_SZ];
    int _front = 0;
    int _back = 0;
    int _size = 0;
};

#endif
