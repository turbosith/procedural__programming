//#include <string>
//#include <iostream>
//using namespace std;
//struct Queue {
//	int front, rear, count;
//	int array[100];
//};
//void add(Queue*& L) {
//	cout << "������� �������� �������� ������ ��������: ";
//	cin >> L->array[L->count];
//	if (L->count == 0) {
//		L->front += 1;
//	}
//	L->rear += 1;
//}
//void output(Queue* L) {
//	cout << "�������: ";
//	for (int i = L->front; i <= L->rear; i++) {
//		cout << L->array[i] << " ";
//	}
//	cout <<endl;
//}
//void qclear(Queue* L) {
//	if (L->count == 0) {
//		cout << "������� ������"<<endl;
//	}
//	else {
//		cout << "������� �� ������"<<endl;
//	}
//}
//void remove(Queue*& L) {
//	L->front += 1;
//}
//void clear(Queue*& L) {
//	L->count = 0;
//	L->front = 0;
//	L->rear = 0;
//}
//int get(Queue * L) {
//	return L->array[L->front];
//}