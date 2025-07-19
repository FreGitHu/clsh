//
// Created by fredd on 19/07/25.
//

#ifndef BUILTINS_H
#define BUILTINS_H

#include <unordered_map>
#include <string>

#include "commands/ExitCommand.h"

extern std::unordered_map<std::string, Command*> builtins;

#endif //BUILTINS_H
