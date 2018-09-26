/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Queue.hpp
 * Author: parfait
 *
 * Created on 26 septembre 2018, 14:09
 */

#ifndef QUEUE_HPP
#define QUEUE_HPP

#include "Stack.hpp"

template <typename T>
class Queue {
    Stack<T>* s;

public:
    Queue();
    Queue(const Queue& orig);
    void enQueue(T x);
    T deQueue();
    virtual ~Queue();
};

#endif /* QUEUE_HPP */

