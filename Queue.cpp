/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Queue.cpp
 * Author: parfait
 * 
 * Created on 26 septembre 2018, 14:09
 */

#include "Queue.hpp"
#include <iostream>

using namespace std;

template <typename T>
Queue<T>::Queue() {
    s = new Stack<T>();
}

template <typename T>
Queue<T>::Queue(const Queue& orig) {
}

template <typename T>
void Queue<T>::enQueue(T x) {
    s->push(x);
}

template <typename T>
T Queue<T>::deQueue() {
    // pop an item from the stack
    T x;
    try {
       x = s->pop();
    } catch(...){ 
        cout<<"Queue: Stack bottom reached\n"; 
        exit(0);
    }

    // if stack becomes empty, return
    // the popped item
    if (s->is_empty())
        return x;

    // recursive call
    T item = deQueue();

    // push popped item back to the stack
    s->push(x);

    // return the result of deQueue() call
    return item;
}

template <typename T>
Queue<T>::~Queue() {
    delete s;
}

template class Queue<int>;
