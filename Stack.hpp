/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Stack.hpp
 * Author: parfait
 *
 * Created on 26 septembre 2018, 10:33
 */

#ifndef STACK_HPP
#define STACK_HPP
#include <cstddef>

template <typename T>
class Stack {
    struct Node {
        T data;
        Node* next;
    };
    
    Node* top;
    size_t count;
    
public:
    Stack() : top (nullptr), count(0) { }
    Stack(const Stack& orig);
    virtual ~Stack();
    void push(T element);  
    T pop();
    bool is_empty() const {return count == 0; }
    size_t size() const { return count; }
    T peek_top() const; 
    void print() const;
};

#endif /* STACK_HPP */

