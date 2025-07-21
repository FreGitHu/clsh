//
// Created by fredd on 19/07/25.
//

#include "builtins.h"

ExitCommand exitCmd;
HelpCommand helpCmd;
EchoCommand echoCmd;

std::unordered_map<std::string, Command*> builtins = {
    {"exit", &exitCmd},
    {"help", &helpCmd},
    {"echo", &echoCmd},
    {"print", &echoCmd}
};