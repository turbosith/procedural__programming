#ifndef _CL2_H_
#define _CL2_H_
#include "cl1.h"
class cl2 :  public cl1 {
	string name;
public:
	cl2(string s);
	void output();
};
#endif