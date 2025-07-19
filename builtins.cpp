//
// Created by fredd on 19/07/25.
//

#include "builtins.h"

ExitCommand exitCmd;
HelpCommand helpCmd;

std::unordered_map<std::string, Command*> builtins = {
    {"exit", &exitCmd},
    {"help", &helpCmd}
};