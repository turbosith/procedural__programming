#include "doublelist.h"
int main() {
	setlocale(LC_ALL, "Russian");
	Tnode* HeadList = NULL,  * ptr;
	cout << "������� ����������� �������" << endl;
	int n;
	cin >> n;
	createList(HeadList, n);
	outList(HeadList);
	



	return 0;
}