#include <iostream>
#include <string>
#include <cstdlib>
#include"charstack.h"
using namespace std;
int main()
{
	setlocale(0, "Russian");
	int v;
	int n = 0;
	while (true) {
		cout << "1-���������� ���� ������� ������� ������ � ������"<<endl;
		cout << "0-��qnb"<<endl;
		cin >> v;
			switch (v) {
			case 1: {
				opr();
				
			}
			case 0: {
				
				break;
			}
			}
	}
	return 0;
}