#ifndef __Director_H__
#define __Director_H__
#include "Approver.h"

class Director :public Approver
{
private:
    string director_name;
    Approver *successor;
protected:
    virtual void set_successor(Approver &app)override;
public:
    Director(const string &name);
    virtual void process_request(const PurchaseRequest &pch_rest)override;
    ~Director();
};

#endif