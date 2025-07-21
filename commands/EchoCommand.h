//
// Created by fredd on 21/07/25.
//

#ifndef ECHOCOMMAND_H
#define ECHOCOMMAND_H
#include "../Command.h"


class EchoCommand final : public Command {
    int execute(const std::vector<std::string> &args) override;
    std::string short_help() override;
    std::string help() override;
};



#endif //ECHOCOMMAND_H
