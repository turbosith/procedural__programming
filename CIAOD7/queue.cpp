#include <iostream>
#include <string>
#include <cstdlib>
#include "queue.h"
using namespace std;
int main()
{
	setlocale(0, "Russian");
	int a;
	int n = 0;
	Queue* L = new Queue;
	L->count = 0;
	L->front = NULL;
	L->rear = NULL;
	cout << " ������� " << "1- ���� ������ �������� ������� � �������" << endl;
	cout << " ������� " << "2- ���� ������ e������ ������� �� �������" << endl;
	cout << " ������� " << "3- ���� ������ �������� �������" << endl;
	cout << " ������� " << "4- ���� ������ ���������� ����� �� �������" << endl;
	cout << " ������� " << "5- ���� ������ ������� �������" << endl;
	while (true) {
		cin >> a;
		if (a == 1) {
			add(L);
			L->count += 1;
		}
		if (a == 2) {
				remove(L);
				L->count -= 1;
			}
		if (a == 3) {
				clear(L);
				
			}
		if (a == 4) {
				bool b=qclear(L);
				if (b == 1) {
					cout << "������� ������.\n";
				}
				else {
					cout << "������� �� ������\n";
				}
			}
		if (a == 5) {
				output(L);
			}
		if (a == 0) {
				break;
			}	
	}
	return 0;
}