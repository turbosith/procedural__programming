#include "cl4.h"
int main(){
	cl4* p;
	int a1, a2, a3, a4;
	int x;
	cin >> a1 >> a2 >> a3 >> a4;
	cl4 ob(a1, a2, a3, a4);
	cout << "a1 = " << a1 << "    " << "a2 = " << a2 << "    " << "a3 = " << a3 << "    " << "a4 = " << a4 << endl;
	while (true) {
		cin >> x;
		if (x == 0) {
			break;
		}
		else {
			int number;
			cin >> number;
			if (number == 1) {
				p = &ob;
				cout << "Class " << number << "    " << "F(" << x << ") = " << p->cl1::calculation(x) << endl;

			}
			if (number == 2) {
				p = &ob;
				cout << "Class " << number << "    " << "F(" << x << ") = " << p->cl2::calculation(x) << endl;

			}
			if (number == 3) {
				p = &ob;
				cout << "Class " << number << "    " << "F(" << x << ") = " << p->cl3::calculation(x) << endl;

			}
			if (number == 4) {
				p = &ob;
				cout << "Class " << number << "    " << "F(" << x << ") = " << p->calculation(x) << endl;
			}
		}
	}
	return 0;
}