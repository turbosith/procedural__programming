#include "cl3.h"
cl3::cl3(int a1, int a2,int a3) :cl2(a1,a2) {
	this->a1 = a1;
	this->a2 = a2;
}
int cl3::calculation(int val) {
	return a1 * val + a2 * val * val+a3*val*val*val;
}