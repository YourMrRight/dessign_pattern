#include <map>
#include <iostream>
#include <string>
#include "TestClassB.h"
using namespace std;

int main(int argc,char* argv[]) {
	TestClassB* ptrObj=(TestClassB*)ClassFactory::getInstance().getClassByName("TestClassB");
	ptrObj->m_print();
}
