#include "Sum.h"
#include <iostream>

Sum::Sum(INode* left, INode* right) : left(left), right(right) {}

double Sum::calc() const {
    return left->calc() + right->calc();
}

void Sum::print() const {
    //std::cout << "(";
    left->print();
    std::cout << " + ";
    right->print();
    //std::cout << ")";
}