//
// Created by fredd on 19/07/25.
//

#include "HelpCommand.h"

#include <print>

#include "../builtins.h"

int HelpCommand::execute(const std::vector<std::string> &args) {
    if (args.size() == 2) {
        auto it = builtins.find(args[1]);
        if (it != builtins.end()) {
            std::println("Help for {}:", args[1]);
            std::println(it->second->help());
        } else {
            std::println("Command {} not found.", args[1]);
            return 1;
        }
    } else {
        std::println("Available commands:");
        for (const auto& [name, cmd] : builtins) {
            std::println(" {} - {}", name, cmd->short_help());
        }
    }
    return 0;
}

std::string HelpCommand::short_help() {
    return "Returns help information for commands.";
}

std::string HelpCommand::help() {
    return "help [command] - If an argument is given, it'll provide help about that command. If an argument is not given, it'll list all commands.";
}

