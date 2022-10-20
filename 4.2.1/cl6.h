#ifndef _CL6_H_
#define _CL6_H_
#include "cl2.h"
#include "cl3.h"
class cl6 :  public cl2,  public cl3 {
	string name;
public:
	cl6(string s);
	void output();
};
#endif