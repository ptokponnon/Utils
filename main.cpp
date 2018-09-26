/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: parfait
 *
 * Created on 13 septembre 2018, 13:19
 */

#include <cstdlib>
#include <iostream>
#include "StackT.hpp"
#include "QueueT.hpp"

using namespace std;
/*
 * Driver program to test above functions 
 */
int main(int argc, char** argv) {
    StackT::main(argc, argv);
    QueueT::main(argc, argv);
    return 0;
}
