#include "cl7.h"
cl7::cl7(string s) :cl4(s), cl5(s) {
	name = s + "_7";
}
void cl7::output() {
	cout << name << endl;
}