#ifndef _CL2_H_
#define _CL2_H_
#include "cl1.h"
using namespace std;
class cl2:public cl1 {
	string name;
	int val;
public:
	cl2(string nam, int v);
	void vivod();
};
#endif