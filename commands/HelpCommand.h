//
// Created by fredd on 19/07/25.
//

#ifndef HELPCOMMAND_H
#define HELPCOMMAND_H
#include "../Command.h"


class HelpCommand final : public Command {
    int execute(const std::vector<std::string>& args) override;
    std::string short_help() override;
    std::string help() override;
};



#endif //HELPCOMMAND_H
