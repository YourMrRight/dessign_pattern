#include "Command.h"
#include "Container.h"
#include "ListCommand.h"
class CommandFactory
{
private:
    /* data */
public:
    CommandFactory(/* args */);
    ~CommandFactory();
    static FTPCommand* get_command(const string &cmd);
};

CommandFactory::CommandFactory(/* args */)
{
}

CommandFactory::~CommandFactory()
{
}

FTPCommand* CommandFactory::get_command(const string &cmd)
{
    Container *constainer = Container::get_Container();
    FTPCommand *command = nullptr;
    if(cmd == "LIST"){
        if(constainer->is_cmd_empty(cmd)){
            constainer->add_cmd(cmd,new ListCommand());
            command = constainer->get_cmd(cmd);
        }else{
            command = constainer->get_cmd(cmd);
        }
    } else if(cmd == "PART"){

    }
    return command;
}
