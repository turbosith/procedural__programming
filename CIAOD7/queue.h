#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
struct Tnode {
	int a;
	Tnode* next;
};
struct Queue {
	Tnode* front, * rear;
	int count;
};
void add(Queue*& L) {
	Tnode* q = new Tnode;
	cout << "¬ведите новый элемент: ";
	cin >> q->a;
	q->next = NULL;
	if (L->count == 0) {
		L->rear = q;
		L->front = q;
	}
	else {
		L->rear->next = q;
		L->rear = q;
	}
}
void output(Queue* L) {
	Tnode* q = L->front;
	cout << "ќчередь: ";
	while (q != NULL) {
		cout << q->a << " ";
		q = q->next;
	}
	cout << endl;
}
bool qclear(Queue* L) {
	if (L->front==nullptr) {
		return 1;
	}
	else {
		return 0;
	}
}
void remove(Queue*& L) {
	L->front = L->front->next;
}
void clear(Queue*& L) {
	if (not qclear(L)) {
		remove(L);
		clear(L);
	}		
}
