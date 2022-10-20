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
	cout << " ¬ведите " << "1- если хотите добавить элемент в очередь" << endl;
	cout << " ¬ведите " << "2- если хотите eдалить элемент из очереди" << endl;
	cout << " ¬ведите " << "3- если хотите очистить очередь" << endl;
	cout << " ¬ведите " << "4- если хотите определить пуста ли очередь" << endl;
	cout << " ¬ведите " << "5- если хотите вывести очередь" << endl;
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
					cout << "ќчередь пуста€.\n";
				}
				else {
					cout << "ќчередь не пуста€\n";
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