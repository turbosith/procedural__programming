#include "cl1.h"
cl1::cl1(string nam, int v){
	name = nam+"_1";
	val = pow(v,1);
}
void cl1::vivod() {
	cout << name << " " << val<<endl;
}