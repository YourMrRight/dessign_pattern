#include "President.h"

#include <iostream>

President::President(const string &name):Approver(name), president_name(name)
{
    
}

void President::process_request(const PurchaseRequest &pch_rest)
{
    if(pch_rest.get_amount()<5000){
        std::cout<<"VicePresident dosomething!"<<std::endl;
        return;
    }
    this->successor->process_request(pch_rest); 
}


void President::set_successor(Approver &app)
{
    this->successor = &app;
}
