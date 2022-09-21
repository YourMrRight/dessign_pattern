#ifndef __APPROVER_H__
#define __APPROVER_H__

#include "PurchaseRequest.h"
#include <string>

using namespace std;

class Approver{
private:
    const string m_name;
    Approver *m_successor;
protected:
    virtual void set_successor(Approver &successor);

public:
    Approver(const string &name);
    virtual void process_request(const PurchaseRequest &pch_rest) = 0;
};


#endif // __APPROVER_H__