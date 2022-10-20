#include "cl5.h"
cl5::cl5(string s) :cl1(s) {
	name = s + "_5";
}
void cl5::output() {
	cout << name << endl;
}