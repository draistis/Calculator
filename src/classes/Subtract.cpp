#include "Subtract.h"
#include <iostream>

Subtract::Subtract(INode* left, INode* right) : left(left), right(right) {}

double Subtract::calc() const {
    return left->calc() - right->calc();
}

void Subtract::print() const {
    //std::cout << "(";
    left->print();
    std::cout << " - ";
    right->print();
    //std::cout << ")";
}