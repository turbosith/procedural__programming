#include "cl3.h"
cl3::cl3(string nam, int v) :cl2(nam, v) {
	name = nam + "_3";
	val = pow(v, 3);
}
void cl3::vivod() {
	cout << name << " " << val << endl;
}