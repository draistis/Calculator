#ifndef SUM_H
#define SUM_H

#include "INode.h"

class Sum : public INode {
private:
    INode* left;
    INode* right;

public:
    Sum(INode* left, INode* right);
    double calc() const override;
    void print() const override;
};

#endif // SUM_H