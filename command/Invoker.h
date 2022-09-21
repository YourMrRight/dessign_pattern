#pragma once
#include "Command.h"
class Invoker
{
private:
    FTPCommand *command;
    Invoker();
    static Invoker *instance;
public:
    void set_command(FTPCommand *cmd);
    void action();
    static Invoker* get_invoker();
};
Invoker *Invoker::instance = 0;
Invoker::Invoker(/* args */)
{
    
}

void Invoker::set_command(FTPCommand *cmd)
{
    this->command = cmd;
}

void Invoker::action()
{
    this->command->exec();
}

Invoker* Invoker::get_invoker()
{
    if(instance == nullptr) {
        instance = new Invoker();
    }
    return instance;
}
