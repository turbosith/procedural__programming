#include"find.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	int mas, task, size1;
	clock_t start, end;
	int temp = 0;
	int i, j;

	cout << "������� �����, ����� ������� ������ ���������� �������" << endl;
	cout << "1. ��������� ��������������" << endl;
	cout << "2. ��������� ���������� �������" << endl;
	cout << "3. ��������� �� �����������" << endl;
	cout << "4. ��������� �� ��������" << endl;
	cin >> mas;
	cout << "������� ����������� �������" << endl;
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
	cout << "������� �����, ����� ������� ����������" << endl;
	cout << "1. ����������� ����������" << endl;
	cout << "2. ��������� ����������" << endl;
	cout << "3. ������� �������" << endl;
	cin >> mas;

	switch (mas)
	{

	case 1:
		start = clock();
		bublesort(vecctor, size1);
		end = clock();
		cout << endl;
		cout << "����� ������������: " << endl;
		cout << counter << endl;
		cout << "����� ���������:" << endl;
		cout << counter1 << endl;
		cout << "����� ������ ���������: " << endl;
		cout << (static_cast<double>(end - start));
		break;



	case 2:

		start = clock();
		shekersort(vecctor, size1);
		end = clock();
		cout << endl;
		cout << "����� ������������: " << endl;
		cout << counter << endl;
		cout << "����� ���������:" << endl;
		cout << counter1 << endl;
		cout << "����� ������ ���������: " << endl;
		cout << (static_cast<double>(end - start));
		break;

	case 3:

		start = clock();
		mergeSort(vecctor, 0, size1 - 1);
		end = clock();
		cout << endl;
		cout << "����� ������������: " << endl;
		cout << counter << endl;
		cout << "����� ���������:" << endl;
		cout << counter1 << endl;
		cout << "����� ������ ���������: " << endl;
		cout << (static_cast<double>(end - start));
	default:
		break;
	}

}