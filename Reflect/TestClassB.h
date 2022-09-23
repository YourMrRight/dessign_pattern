#include <iostream>
#include "RegisterAction.h"
#include "util.h"
using namespace std;

// test class B
class TestClassB {
public:
	void m_print() {
		cout<<"hello TestClassB"<<endl;
	};
};

REGISTER(TestClassB);
