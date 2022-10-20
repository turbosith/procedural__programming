#include "cl2.h"
cl2::cl2(string s):cl1( s) {
	name = s + "_2";
}
void cl2::output() {
	cout << name << endl;
}