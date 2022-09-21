#pragma once
#include <iostream>
using namespace std;
class FTPCommand{
public:
    virtual void exec() = 0;
};