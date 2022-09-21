#include "PurchaseRequest.h"

PurchaseRequest::PurchaseRequest(double amt, int num, const string &pp)
    : amount(amt), number(num), purpose(pp)
{
    
}

void PurchaseRequest::set_amount(double amt)
{
    this->amount = amt;
}

void PurchaseRequest::set_number(double num)
{
    this->number = num;
}

void PurchaseRequest::set_purpose(const string &pp)
{
    this->purpose = pp; 
}

int PurchaseRequest::get_amount()const
{
    return amount;
}

int PurchaseRequest::get_number()const
{
    return number;
}


string PurchaseRequest::get_purpose()const
{
    return purpose;
}
