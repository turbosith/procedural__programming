#include "cl6.h"
cl6::cl6(string s) :cl2(s),cl3(s) {
	name = s + "_6";
}
void cl6::output() {
	cout << name << endl;
}