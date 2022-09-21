#include "Invoker.h"
#include "PortCommand.h"
#include <iostream>
#include <unordered_map>

using namespace std;
static unordered_map<string,FTPCommand*> cmdMap;
int main()
{
    string cmd;
    cin>>cmd;
    Invoker *invoker = Invoker::get_invoker();
    FTPCommand *port_cmd = new PortCommand();
    invoker->set_command(port_cmd);
    invoker->action();


}