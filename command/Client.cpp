#include "Invoker.h"
#include "PortCommand.h"
#include "CommandFactory.h"
#include <iostream>
#include <unordered_map>

using namespace std;
static unordered_map<string,FTPCommand*> cmdMap;
int main()
{
    string cmd;
    cin>>cmd;
    Invoker *invoker = Invoker::get_invoker();
    FTPCommand *list_cmd = CommandFactory::get_command(cmd);
    invoker->set_command(list_cmd);
    invoker->action();
    return 0;
}