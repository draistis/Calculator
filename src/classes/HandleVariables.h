#ifndef HANDLEVARIABLES_H
#define HANDLEVARIABLES_H

#include <string>
#include <map>

class HandleVariables {
public:
    static void process(const std::string& expression);
    static double getVariable(const std::string& variable);

private:
    static std::map<std::string, double> variables;
};

#endif // HANDLEVARIABLES_H