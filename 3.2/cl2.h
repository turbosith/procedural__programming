#ifndef _CL2_H_
#define _CL2_H_
#include "cl_base.h"
class cl2 :public cl_base {  
public: 
    cl2(cl_base* parent, string object_name) :cl_base(parent,  object_name) {};};
#endif