#include "Parser.h"
#include "classes/HandleVariables.cpp"

INode* Parser::parse(const std::string& expression) {
    size_t index = 0;
    return parseExpression(expression, index);
}

INode* Parser::parseExpression(const std::string& expression, size_t& index) {
    INode* left = parseTerm(expression, index);

    while (index < expression.length()) {
        if (expression[index] == '+') {
            index++;
            INode* right = parseTerm(expression, index);
            left = new Sum(left, right);
        } else if (expression[index] == '-') {
            index++;
            INode* right = parseTerm(expression, index);
            left = new Subtract(left, right);
        } else {
            break;
        }
    }
    return left;
}

INode* Parser::parseTerm(const std::string& expression, size_t& index) {
    INode* left = parseFactor(expression, index);

    while (index < expression.length()) {
        if (expression[index] == '*') {
            index++;
            INode* right = parseFactor(expression, index);
            left = new Multiply(left, right);
        } else if (expression[index] == '/') {
            index++;
            INode* right = parseFactor(expression, index);
            left = new Divide(left, right);
        } else {
            break;
        }
    }
    return left;
}

INode* Parser::parseFactor(const std::string& expression, size_t& index) {
    if (expression[index] == '(') {
        index++;
        INode* node = parseExpression(expression, index);
        if(expression[index] != ')') {
            throw std::runtime_error("Expected ')'");
        }
        index++;
        return node;
    } else {
        return parseNumber(expression, index);
    }
}

INode* Parser::parseNumber(const std::string& expression, size_t& index) {
    double value = 0;
    while (index < expression.length() && isdigit(expression[index])) {
        value = value * 10 + (expression[index] - '0');
        index++;
    }
    if (expression[index] == '.') {
        index++;
        double fraction = 1;
        while (index < expression.length() && isdigit(expression[index])) {
            fraction /= 10;
            value += fraction * (expression[index] - '0');
            index++;
        }
    }
    if (isalpha(expression[index])) {
        std::string variable;
        while (index < expression.length() && isalpha(expression[index])) {
            variable += expression[index];
            index++;
        }
        value = HandleVariables::getVariable(variable);
    }
    return new Value(value);
}