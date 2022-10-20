#ifndef _CL8_H_
#define _CL8_H_
#include "cl6.h"
#include "cl7.h"
class cl8 :  public cl6,  public cl7 {
	string name;
public:
	cl8(string s);
	void output();
};
#endif