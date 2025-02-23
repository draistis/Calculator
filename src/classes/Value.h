#ifndef VALUE_H
#define VALUE_H

#include "INode.h"
#include <iostream>

class Value : public INode {
private:
    double value;

public:
    explicit Value(double value) : value(value) {}

    double calc() const override {
        return value;
    }

    void print() const override {
        std::cout << value;
    }
};

#endif // VALUE_H