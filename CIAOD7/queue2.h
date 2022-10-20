//#include <string>
//#include <iostream>
//using namespace std;
//struct Queue {
//	int front, rear, count;
//	int array[100];
//};
//void add(Queue*& L) {
//	cout << "Введите числовое значение нового элемента: ";
//	cin >> L->array[L->count];
//	if (L->count == 0) {
//		L->front += 1;
//	}
//	L->rear += 1;
//}
//void output(Queue* L) {
//	cout << "Очередь: ";
//	for (int i = L->front; i <= L->rear; i++) {
//		cout << L->array[i] << " ";
//	}
//	cout <<endl;
//}
//void qclear(Queue* L) {
//	if (L->count == 0) {
//		cout << "Очередь пустая"<<endl;
//	}
//	else {
//		cout << "Очередь не пустая"<<endl;
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