#include <string>

#include "ClassFactory.h"
using namespace std;

class RegisterAction {
public:
	RegisterAction(string className,PTRCreateObject ptrCreateFn) {
		ClassFactory::getInstance().registClass(className, ptrCreateFn);
	}
};
