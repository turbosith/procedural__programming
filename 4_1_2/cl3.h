#ifndef _CL3_H_
#define _CL3_H_
#include "cl2.h"
using namespace std;
class cl3 :public cl2 {
	string name;
	int val;
public:
	cl3(string nam, int v);
	void vivod();
};
#endif