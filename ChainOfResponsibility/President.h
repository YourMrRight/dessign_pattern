#ifndef __PRESIDENT_H__
#define __PRESIDENT_H__

#include "Approver.h"

class President: public Approver
{
private:
    string president_name;
    Approver *successor;
protected:
    virtual void set_successor(Approver &app)override;
public:
    President(const string &name);
    virtual void process_request(const PurchaseRequest &pch_rest)override;
};




#endif // __PRESIDENT_H__