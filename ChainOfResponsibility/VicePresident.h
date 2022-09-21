#ifndef __VICEPRESIDENT_H__
#define __VICEPRESIDENT_H__

#include"Approver.h"

class VicePresident: public Approver
{
private:
    string vice_president_name;
    Approver *successor;
protected:
    virtual void set_successor(Approver &app)override;
public:
    VicePresident(const string &name);
    virtual void process_request(const PurchaseRequest &pch_rest)override;
};

#endif // __VICEPRESIDENT_H__