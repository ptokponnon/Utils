/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Stack.cpp
 * Author: parfait
 * 
 * Created on 26 septembre 2018, 10:33
 */
#include <iostream>
#include "Stack.hpp"

using namespace std;
template <typename T>
Stack<T>::Stack(const Stack& orig) {
}

template <typename T>
void Stack<T>::push(T element) {
    Node* newTop = new Node;
    if (top == nullptr) {
        newTop->data = element;
        newTop->next = nullptr;
        top = newTop;
    } else {
        newTop->data = element;
        newTop->next = top;
        top = newTop;
    }
    count++;
}

template <typename T>
T Stack<T>::pop() {
    if (is_empty())
        throw runtime_error("The stack is empty.");
    Node* old = top;
    top = top->next;
    T data = old->data;
    count--;
    delete(old);
    return data;
}

template <typename T>
T Stack<T>::peek_top() const {
    if(is_empty())
        throw runtime_error("The stack is empty.");
    return top->data;
}

template <typename T>
void Stack<T>::print() const {
    Node* temp = top;
    while (temp != nullptr) {
        cout << temp->data << ",";
        temp = temp->next;
    }
}

template <typename T>
Stack<T>::~Stack() {
    Node* current = top;

    while (current) {
        Node* next = current->next;
        delete current;
        current = next;
    }

    top = nullptr;
}

template class Stack<int>;