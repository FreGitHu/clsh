//
// Created by fredd on 19/07/25.
//

#ifndef EXITCOMMAND_H
#define EXITCOMMAND_H
#include "../Command.h"


class ExitCommand final : public Command {
public:
    int execute(const std::vector<std::string>& args) override;
    std::string short_help() override;
    std::string help() override;
};



#endif //EXITCOMMAND_H
