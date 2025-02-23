#include "Multiply.h"
#include <iostream>

Multiply::Multiply(INode* left, INode* right) : left(left), right(right) {}

double Multiply::calc() const {
    return left->calc() * right->calc();
}

void Multiply::print() const {
    std::cout << "(";
    left->print();
    std::cout << " * ";
    right->print();
    std::cout << ")";
}