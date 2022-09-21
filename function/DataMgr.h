// DataMgr.h文件
#include <memory>
#include <iostream>
#include <string>
#include "TcpMgr.h"
using namespace std;
class DataMgr 
{
public:
	void Init(TcpMgr *tcp_mgr)
	{
		m_pTcpMgr.reset(tcp_mgr);
        using std::placeholders::_1;
		m_pTcpMgr->SetDataHandleCb(std::bind(&DataMgr::HandleData, this ,_1)); // 在初始化中为 TcpMgr 设置回调函数
	}
	void HandleData(const string &data)
	{
		cout<<data<<endl;
	}
	
private:
	shared_ptr<TcpMgr> m_pTcpMgr;
};