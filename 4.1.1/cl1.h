#include "cl_base.h"
#ifndef _CL1_H_
#define _CL1_H_
class cl1 :public cl_base {
public:
	cl1(cl_base* parent, string object_name) :cl_base(parent, object_name) {};
};
#endif  