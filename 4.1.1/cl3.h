#include "cl_base.h"
#ifndef _CL3_H_
#define _CL3_H_
class cl3 :public cl_base {
public:
	cl3(cl_base* parent, string object_name) :cl_base(parent, object_name) {};
};
#endif 