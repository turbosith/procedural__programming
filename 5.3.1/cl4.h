#ifndef _CL4_H_
#define _CL4_H_
#include "cl3.h"
class cl4 : public cl3 {
	int a1;
	int a2;
	int a3;
	int a4;
public:
	int calculation(int val);
	cl4(int a1, int a2, int a3, int a4);
};
#endif 