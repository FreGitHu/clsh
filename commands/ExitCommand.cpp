//
// Created by fredd on 19/07/25.
//

#include "ExitCommand.h"
#include <print>

int ExitCommand::execute(const std::vector<std::string>& args) {
    int code = 0;
    if (args.size() > 1) {
        try {
            code = std::stoi(args[1]);
        } catch (...) {
            std::println("Please provide a proper exit code.");
            return 1;
        }
    }
    std::exit(code);
}

std::string ExitCommand::short_help() {
    return "Exits CLSH.";
}

std::string ExitCommand::help() {
    return "exit [code]\nIf exit code is specified, CLSH will exit with the code.\nIf exit code is not specified, CLSH will exit with code 0.";
}