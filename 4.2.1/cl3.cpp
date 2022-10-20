#include "cl3.h"
cl3::cl3(string s) :cl1(s) {
	name = s + "_3";
}
void cl3::output() {
	cout << name << endl;
}