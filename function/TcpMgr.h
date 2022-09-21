#ifndef __TCPMGR_H__
#define __TCPMGR_H__

#include <string>
#include "functional"
using namespace std;
// TcpMgr.h文件
class TcpMgr
{
public:
	void SetDataHandleCb(std::function<void(const string &)> cb)
	{
		m_handleDataCb = cb; 
	}
	void OnRecvedData(const string &data)
	{
		// 调用DataMgr::HandleData
		m_handleDataCb(data);
	}
private:
	std::function<void(const string &)> m_handleDataCb;
};

#endif // __TCPMGR_H__