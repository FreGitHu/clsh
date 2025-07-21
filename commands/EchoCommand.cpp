//
// Created by fredd on 21/07/25.
//

#include "EchoCommand.h"

#include <print>

int EchoCommand::execute(const std::vector<std::string> &args) {
    for (size_t i = 1; i < args.size(); ++i) {
        std::print("{}", args[i]);
        if (i + 1 < args.size()) {
            std::print(" ");
        }
    }
    std::println();
    return 0;
}

std::string EchoCommand::short_help() {
    return "Prints provided arguments.";
}

std::string EchoCommand::help() {
    return "echo [arguments]\nIf arguments are provided, echo will print out those arguments.\nIf arguments are not provided, echo will print out a newline.";
}