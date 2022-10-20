#include "cl4.h"
cl4::cl4(string s) :cl1(s) {
	name = s + "_4";
}
void cl4::output() {
	cout << name << endl;
}