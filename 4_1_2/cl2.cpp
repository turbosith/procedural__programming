#include "cl2.h"
cl2::cl2(string nam, int v) :cl1(nam, v) {
	name = nam + "_2";
	val = pow(v, 2);
}
void cl2::vivod() {
	cout << name << " " << val << endl;
}