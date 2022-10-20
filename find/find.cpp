#include"find.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	int mas, task, size1;
	clock_t start, end;
	int temp = 0;
	int i, j;

	cout << "Введите цифру, чтобы выбрать способ заполнения массива" << endl;
	cout << "1. Заполнить самостоятельно" << endl;
	cout << "2. Заполнить случайными цифрами" << endl;
	cout << "3. Заполнить по возрастанию" << endl;
	cout << "4. Заполнить по убыванию" << endl;
	cin >> mas;
	cout << "Введите размерность массива" << endl;
	cin >> size1;
	vector <int> vecctor(size1);

	switch (mas)
	{

	case 1:

		manual_input(vecctor, size1);
		cout << endl;
		break;



	case 2:

		random_input(vecctor, size1);
		cout << endl;
		break;

	case 3:

		input(vecctor, size1);
		cout << endl;

		break;

	case 4:

		reverceinput(vecctor, size1);
		cout << endl;
	default:
		break;
	}
	cout << "Введите цифру, чтобы выбрать сортировку" << endl;
	cout << "1. Пузырьковая сортировка" << endl;
	cout << "2. Шейкерная сортировка" << endl;
	cout << "3. Простое слияние" << endl;
	cin >> mas;

	switch (mas)
	{

	case 1:
		start = clock();
		bublesort(vecctor, size1);
		end = clock();
		cout << endl;
		cout << "Число перестановок: " << endl;
		cout << counter << endl;
		cout << "Число сравнений:" << endl;
		cout << counter1 << endl;
		cout << "Время работы программы: " << endl;
		cout << (static_cast<double>(end - start));
		break;



	case 2:

		start = clock();
		shekersort(vecctor, size1);
		end = clock();
		cout << endl;
		cout << "Число перестановок: " << endl;
		cout << counter << endl;
		cout << "Число сравнений:" << endl;
		cout << counter1 << endl;
		cout << "Время работы программы: " << endl;
		cout << (static_cast<double>(end - start));
		break;

	case 3:

		start = clock();
		mergeSort(vecctor, 0, size1 - 1);
		end = clock();
		cout << endl;
		cout << "Число перестановок: " << endl;
		cout << counter << endl;
		cout << "Число сравнений:" << endl;
		cout << counter1 << endl;
		cout << "Время работы программы: " << endl;
		cout << (static_cast<double>(end - start));
	default:
		break;
	}

}