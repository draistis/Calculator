#include "HandleVariables.h"
#include <iostream>

std::map<std::string, double> HandleVariables::variables;

void HandleVariables::process(const std::string& expression) {
    size_t index = 0;
    while (index < expression.length()) {
        if (isalpha(expression[index])) {
            std::string variable;
            while (index < expression.length() && isalpha(expression[index])) {
                variable += expression[index];
                index++;
            }

            double value;
            std::cout << "Enter value for " << variable << ": ";
            std::cin >> value;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            variables[variable] = value;
        } else {
            index++;
        }
    }
}

double HandleVariables::getVariable(const std::string& variable) {
    if (variables.find(variable) == variables.end()) {
        throw std::runtime_error("Variable not found: " + variable);
    }
    return variables[variable];
}
