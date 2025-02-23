#include "Divide.h"
#include <iostream>

Divide::Divide(INode* left, INode* right) : left(left), right(right) {}

double Divide::calc() const {
    return left->calc() / right->calc();
}

void Divide::print() const {
    std::cout << "(";
    left->print();
    std::cout << " / ";
    right->print();
    std::cout << ")";
}