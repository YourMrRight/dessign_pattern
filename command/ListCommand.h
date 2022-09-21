#pragma once
#include "Command.h"
class ListCommand :public FTPCommand
{
private:
    /* data */
public:
    ListCommand(/* args */);
    virtual void exec()override;
    ~ListCommand();
};

ListCommand::ListCommand(/* args */)
{
}

void ListCommand::exec()
{
    cout<<"doing list"<<endl;
}

ListCommand::~ListCommand()
{
}
