#include "cl4.h"
cl4::cl4(string nam, int v) :cl3(nam, v) {
	name = nam + "_4";
	val = pow(v, 4);
}
void cl4::vivod() {
	cout << name << " " << val ;
}