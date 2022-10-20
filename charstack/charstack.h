#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
struct N
{
	int info = -1;
	N* next = NULL;
};
void PUSH(int x, N*& S)
{
	N* q = new N;
	q->info = x;
	q->next = S;
	S = q;
}
void opr() {
	N* st = new N;
	st->next = NULL;
	string a;
	int itog[20];
	int counter = 0;
	cout << "¬ведите текст ниже.\n";
	cin >> a;
	int n = a.length();
	for (int i = 0; i < n; i++) {
		if (a[i] == '(') {
			PUSH(i, st);
		}
		else if (a[i] == ')') {
			itog[counter] = st->info + 1;
			itog[counter + 1] = i + 1;
			counter += 2;
			if (st->next != NULL) {
				st = st->next;
			}
			else {
				st->info = -1;
			}
		}
	}
	int vv;
	cout << " акой вывод требуетс€?" << endl <<
		"¬ведите 1-если в пор€дке возрастани€ номеров позиций закрывающих скобок" << endl
		<< "¬ведите 2-если в пор€дке возрастани€ номеров позиций открывающих скобок" << endl;

	cin >> vv;
	if (vv == 1) {
		for (int i = 1; i < counter; i += 2) {
			if (i + 2 < counter) {
				if (itog[i] > itog[i + 2]) {
					int ab = itog[i];
					int ba = itog[i - 1];
					itog[i] = itog[i + 2];
					itog[i - 1] = itog[i + 1];
					itog[i + 1] = ba;
					itog[i + 2] = ab;
					i = -1;
				}
			}
		}
	}
	else {
		for (int i = 0; i < counter; i += 2) {
			if (i + 3 < counter) {
				if (itog[i] > itog[i + 2]) {
					int ab = itog[i];
					int ba = itog[i + 1];
					itog[i] = itog[i + 2];
					itog[i + 1] = itog[i + 3];
					itog[i + 2] = ab;
					itog[i + 3] = ba;
					i = -2;
				}
			}
		}
	}
	for (int i = 0; i < counter; i++) {
		if (i != 0 and i % 2 == 0) {
			cout << "; ";
		}
		cout << itog[i] << " ";
	}
}