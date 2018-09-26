/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StackT.hpp
 * Author: parfait
 *
 * Created on 26 septembre 2018, 16:10
 */

#ifndef STACKT_HPP
#define STACKT_HPP

#include <cstdlib>
#include <iostream>
#include "Stack.hpp"
using namespace std;

namespace StackT {

    int main(int argc, char** argv) {
        Stack<int> s;
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        s.push(5);
        s.push(6);

        s.pop();
        cout << "new stack\n";
        s.print();

        return 0;
    }
}

#endif /* STACKT_HPP */

