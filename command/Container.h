#include "Command.h"
#include <unordered_map>
using namespace std;
class Container
{
private:
    /* data */
    unordered_map<string, FTPCommand*>cmd_map;
    static Container *instance;
    Container(/* args */);
public:
    static Container* get_Container();
    unordered_map<string, FTPCommand*> get_map();
    void add_cmd(const string &cmd, FTPCommand *ftp_command);
    FTPCommand *get_cmd(const string &cmd);
    bool is_cmd_empty(const string &cmd);
};
unordered_map<string, FTPCommand*> Container::get_map(){
    return this->cmd_map;
}
void Container::add_cmd(const string &cmd, FTPCommand *ftp_command)
{
    if(cmd_map.find(cmd) == cmd_map.end()){
        cmd_map[cmd] = ftp_command;
    }
}

FTPCommand *Container::get_cmd(const string &cmd)
{
    if(cmd_map.find(cmd) != cmd_map.end()){
        return cmd_map[cmd];
    }else{
        throw "error! can't find this cmd implement!";
    }
}

bool Container::is_cmd_empty(const string &cmd)
{
    return cmd_map.find(cmd) == cmd_map.end() ? true: false;
}

Container* Container::instance = nullptr;

Container::Container(/* args */)
{
}

Container* Container::get_Container()
{
    if(instance == nullptr){
        instance = new Container();
    }
    return instance;
}
