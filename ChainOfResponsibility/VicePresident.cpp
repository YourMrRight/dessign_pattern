#include "VicePresident.h"

#include <iostream>

void VicePresident::set_successor(Approver &app)
{
    this->successor = &app;
}

VicePresident::VicePresident(const string &name): Approver(name),vice_president_name(name)
{
    
}

void VicePresident::process_request(const PurchaseRequest &pch_rest)
{
    if(pch_rest.get_amount()<5000){
        std::cout<<"VicePresident dosomething!"<<std::endl;
        return;
    }
    this->successor->process_request(pch_rest);
}
