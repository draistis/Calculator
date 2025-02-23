#ifndef INODE_H
#define INODE_H

class INode {
public:
    virtual ~INode() = default;
    virtual double calc() const = 0;
    virtual void print() const = 0;
};

#endif // INODE_H