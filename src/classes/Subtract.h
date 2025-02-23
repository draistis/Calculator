#ifndef SUBTRACT_H
#define SUBTRACT_H

#include "INode.h"

class Subtract : public INode {
private:
    INode* left;
    INode* right;

public:
    Subtract(INode* left, INode* right);
    double calc() const override;
    void print() const override;
};

#endif // SUBTRACT_H