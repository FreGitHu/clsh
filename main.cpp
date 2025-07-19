#include <print>
#include <iostream>
#include <string_view>
#include <vector>
#include <ranges>
#include "builtins.h"

int main() {
    std::string input;
    std::vector<std::string> args;
    std::println("Welcome to CLSH. Happy shelling :)");


    while (true) {
        args.clear();
        std::print(">> ");
        if (!std::getline(std::cin, input)) break;

        for (auto && part : std::string_view(input) | std::views::split(' ')) {
            args.emplace_back(&*part.begin(), std::ranges::distance(part));
        }
        if (args.empty()) continue;

        auto it = builtins.find(args[0]);
        if (it == builtins.end()) {
            std::println("Command '{}' not found.", args[0]);
            continue;
        }

        int ret = it->second->execute(args);
        if (ret != 0) {
            std::println("Command '{}' exited with code {}.", args[0], ret);
        }
    }
    return 0;
}