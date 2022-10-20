#include "cl2.h"
cl2::cl2(int a1,int a2):cl1( a1) {
	this->a1 = a1;
	this->a2 = a2;
}
int cl2::calculation(int val) {
	return a1 * val+a2*val*val;
}