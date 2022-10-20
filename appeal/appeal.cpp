#include "appeal.h"
int main() {
	setlocale(LC_ALL, "Russian");
	string s1;
		getline(std::cin, s1);
		


	clock_t start, end;
	start = clock();
	prwo(s1);
	end = clock();
	cout << endl;
	cout << "Число сравнений:" << endl;
	cout << counter1 << endl;
	cout << "Время работы программы: " << endl;
	cout << (static_cast<double>(end - start));

	return 0;
}