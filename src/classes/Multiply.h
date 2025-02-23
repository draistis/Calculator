#ifndef MULTIPLY_H
#define MULTIPLY_H

#include "INode.h"

class Multiply : public INode {
private:
    INode* left;
    INode* right;

public:
    Multiply(INode* left, INode* right);
    double calc() const override;
    void print() const override;
};

#endif // MULTIPLY_H