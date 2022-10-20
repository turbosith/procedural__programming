#include "cl4.h"
int cl4::calculation(int val) {
	return a1 * val + a2 * val * val + a3 * val * val * val+a4*val*val*val*val;
}
cl4::cl4(int a1,int a2,int a3,int a4):cl3(a1,a2,a3){
	this->a1 = a1;
	this->a2 = a2;
	this->a3 = a3;
	this->a4 = a4;
}