#ifndef _CL2_H_
#define _CL2_H_
#include "cl1.h"
class cl2: public cl1 {
	int a1;
	int a2;
public:
	virtual int calculation(int val);
	cl2(int a1, int a2);
};
#endif 