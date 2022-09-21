#include "Approver.h"

void Approver::set_successor(Approver &successor)
{
    this->m_successor = &successor;
}

Approver::Approver(const string &name):m_name(name)
{
    
}
