#pragma once
#include "Command.h"
class GetCommand:public FTPCommand
{
private:
    /* data */
public:
    GetCommand(/* args */);
    ~GetCommand();
    virtual void exec()override;
};

GetCommand::GetCommand(/* args */)
{
}

GetCommand::~GetCommand()
{
}

void GetCommand::exec()
{
    cout<<"doing get"<<endl;
}
