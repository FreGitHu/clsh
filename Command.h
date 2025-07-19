//
// Created by fredd on 19/07/25.
//

#ifndef COMMAND_H
#define COMMAND_H
#include <string>
#include <vector>


class Command {
public:
    virtual ~Command() = default;
    virtual int execute(const std::vector<std::string>& args) = 0;
    virtual std::string short_help() = 0;
    virtual std::string help() = 0;
};



#endif //COMMAND_H
