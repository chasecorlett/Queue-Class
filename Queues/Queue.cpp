/*
    Queue.cpp
        
    Method implementations for Queue class

    Queues assignment

    Author: Chase Corlett
*/

#include "Queue.h"
#include <iostream>

using namespace std;

Queue::Queue() {
    for (int i=0; i<ARRAY_SZ-1; i++) {
        _data[i] = 0;
    }
}

bool Queue::enqueue(char c) {
    if (_size != ARRAY_SZ) {
        _data[_back] = c;
        _back++;
        if (_back > 5) {
            _back = (_back) % 5;
            _front++;
        }
        _size++;
        return true;
    }
    else {
        return false;
    }
}

bool Queue::dequeue()  {
    if (_size == 0) {
        return false;
    }
    else {
        for (int i=0; i<=_back; i++) {
            _data[i] = _data[i+1];
        }
        _data[_back] = 0;
        _back--;
        _back = (_back) % 5;
        _size--;
        return true;
    }
}

char Queue::front()    {
    return _data[_front];
}

bool Queue::is_empty() {
    return (_size == 0);
}

bool Queue::is_full() {
    return (_size == ARRAY_SZ);
}