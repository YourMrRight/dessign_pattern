#include "Director.h"

#include <iostream>

Director::Director(const string &name):Approver(name), director_name(name)
{
    
}

void Director::process_request(const PurchaseRequest &pch_rest)
{
    if(pch_rest.get_amount()<5000){
        std::cout<<"director dosomething!"<<std::endl;
        return;
    }
    this->successor->process_request(pch_rest);    

}
