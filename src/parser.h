#ifndef PARSER_H
#define PARSER_H

#include "classes/INode.h"
#include "classes/Sum.h"
#include "classes/Subtract.h"
#include "classes/Multiply.h"
#include "classes/Divide.h"
#include "classes/Value.h"
#include <string>

class Parser {
public:
    static INode* parse(const std::string& expression);

private:
    static INode* parseExpression(const std::string& expression, size_t& index);
    static INode* parseTerm(const std::string& expression, size_t& index);
    static INode* parseFactor(const std::string& expression, size_t& index);
    static INode* parseNumber(const std::string& expression, size_t& index);
};

#endif // PARSER_H