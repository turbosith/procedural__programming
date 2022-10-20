#ifndef _CL7_H_
#define _CL7_H_
#include "cl4.h"
#include "cl5.h"
class cl7 : virtual public cl4, virtual public cl5 {
	string name;
public:
	cl7(string s);
	void output();
};
#endif