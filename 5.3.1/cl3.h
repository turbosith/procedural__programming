#ifndef _CL3_H_
#define _CL3_H_
#include "cl2.h"
class cl3 : public cl2 {
	int a1;
	int a2;
	int a3;

public:
	int calculation(int val);
	cl3(int a1, int a2, int a3);
};
#endif 