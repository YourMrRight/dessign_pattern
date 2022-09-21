#include "DataMgr.h"

int main(){
    DataMgr *dm = new DataMgr();
    TcpMgr *tm = new TcpMgr();
    dm->Init(tm);
    tm->OnRecvedData("yes");
    return 0; 
}