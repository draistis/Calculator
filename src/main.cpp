#include "Parser.h"
#include <iostream>

int main(){
    while (true) {
        std::string expression;
        std::cout << "Enter an expression: ";
        std::getline(std::cin, expression);

        try {
            INode* root = Parser::parse(expression);
            root->print();
            std::cout << " = " << root->calc() << std::endl;
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }
    std::cout << "Press Enter to exit...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return 0;
}
