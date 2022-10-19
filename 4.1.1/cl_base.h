#ifndef CL_BASE_H
#define CL_BASE_H
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class cl_base
{
	string object_name;
	cl_base* parent;
	vector <cl_base*> children;
	int i_state=0;
public:
	cl_base(cl_base* parent, string object_name = "root");
	void set_name(string name);
	string get_name();
	void print_tree();
	void set_parent(cl_base* parent);
	cl_base* get_parent();
	~cl_base();
	cl_base* get_by_name(string name);
	void print_status_tree();
	void set_status(int stat);
};
#endif
