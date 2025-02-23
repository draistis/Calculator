#ifndef DIVIDE_H
#define DIVIDE_H

#include "INode.h"

class Divide : public INode {
private:
    INode* left;
    INode* right;

public:
    Divide(INode* left, INode* right);
    double calc() const override;
    void print() const override;
};

#endif // DIVIDE_H