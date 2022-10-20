#ifndef _CL4_H_
#define _CL4_H_
#include "cl3.h"
using namespace std;
class cl4 :public cl3 {
	string name;
	int val;
public:
	cl4(string nam, int v);
	void vivod();
};
#endif