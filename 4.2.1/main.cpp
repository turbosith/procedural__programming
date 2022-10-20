#include "cl8.h"
int main() {
	void* pv;
	string na;
	cin >> na;
	cl8* cl = new cl8(na);
	((cl1*)(cl4*)cl)->output();
	((cl1*)(cl2*)(cl6*)cl)->output();
	((cl1*)(cl3*)(cl6*)cl)->output();
	((cl2*)(cl6*)cl)->output();
	((cl3*)(cl6*)cl)->output();
	((cl4*)(cl7*)cl)->output();
	((cl5*)(cl7*)cl)->output();
	((cl6*)cl)->output();
	((cl7*)cl)->output();
	cl->output();
	cout << endl;
	delete cl;
	return 0;
}