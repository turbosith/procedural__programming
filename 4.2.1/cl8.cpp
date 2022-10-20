#include "cl8.h"
cl8::cl8(string s) :cl6(s), cl7(s), cl5(s),cl4(s) {
	name = s + "_8";
}
void cl8::output() {
	cout << name << endl;
}