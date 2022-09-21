#pragma once
#include "Command.h"

class PortCommand:public FTPCommand
{
private:
    
public:
    PortCommand(/* args */);
    ~PortCommand();
    virtual void exec()override;
};

PortCommand::PortCommand(/* args */)
{
}

PortCommand::~PortCommand()
{
}

void PortCommand::exec()
{
    cout<<"doing port"<<endl;
}
