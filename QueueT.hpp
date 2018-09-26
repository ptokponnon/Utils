/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   QueueT.hpp
 * Author: parfait
 *
 * Created on 26 septembre 2018, 16:17
 */

#ifndef QUEUET_HPP
#define QUEUET_HPP

#include <iostream>
#include "Queue.hpp"

using namespace std;

namespace QueueT {
    // Driver code

    int main(int argc, char** argv) {
        Queue<int> q;
        q.enQueue(1);
        q.enQueue(2);
        q.enQueue(3);
        q.enQueue(4);
        q.enQueue(9);
        q.enQueue(5);
        q.enQueue(3);

        while (int i = q.deQueue()) {
            cout << i << '\n';
        }

        return 0;
    }
}

#endif /* QUEUET_HPP */

