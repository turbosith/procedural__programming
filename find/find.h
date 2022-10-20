#include <iostream>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <time.h>
using namespace std;
static int counter = 0;
static int counter1 = 0;
void random_input(vector<int>& vec, int n)
{
	for (int i = 0; i < n; i++)
	{
		vec[i] = 1 + rand();
	}
}
void  manual_input(vector<int>& vec, int n)
{
	for (int j = 0; j < n; j++)
	{
		cout << "Введите элемент " << j << ":" << endl;
		cin >> vec[j];
	}
}
void bublesort(vector<int>& vec, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		counter1++;

		for (int j = (n - 1); j > i; j--) // для всех элементов после i-ого
		{
			counter1++;

			if (vec[j - 1] > vec[j]) // если текущий элемент меньше предыдущего
			{
				int temp = vec[j - 1]; // меняем их местами
				vec[j - 1] = vec[j];
				vec[j] = temp;
				counter++;
			}
		}
	}
}
void input(vector<int>& vec, int n) {
	for (int i = 0; i < n; i++)
	{
		vec[i] = i;
	}

}
void reverceinput(vector<int>& vec, int n) {
	int count = 0;
	for (int i = n; i > 0; i--)
	{
		vec[count] = i;
		count++;
	}

}
void shekersort(vector<int>& vec, int n)
{
	int left = 0, right = n - 1; // левая и правая границы сортируемой области массива
	int flag = 1;  // флаг наличия перемещений
	// Выполнение цикла пока левая граница не сомкнётся с правой
	// и пока в массиве имеются перемещения
	while ((left < right) && flag > 0)
	{
		counter1++;
		flag = 0;
		for (int i = left; i < right; i++)  //двигаемся слева направо
		{
			counter1++;
			if (vec[i] > vec[i + 1]) // если следующий элемент меньше текущего,
			{             // меняем их местами
				double t = vec[i];
				vec[i] = vec[i + 1];
				vec[i + 1] = t;
				counter++;

				flag = 1;      // перемещения в этом цикле были
			}
		}
		right--; // сдвигаем правую границу на предыдущий элемент
		for (int i = right; i > left; i--)  //двигаемся справа налево
		{
			counter1++;
			if (vec[i - 1] > vec[i]) // если предыдущий элемент больше текущего,
			{            // меняем их местами
				double t = vec[i];
				vec[i] = vec[i - 1];
				vec[i - 1] = t;
				counter++;

				flag = 1;    // перемещения в этом цикле были
			}
		}
		left++; // сдвигаем левую границу на следующий элемент
	}
}





void merge(vector<int>& arr, int start, int mid, int end) {

	int len1 = mid - start + 1;
	int len2 = end - mid;

	vector<int> leftArr(len1), rightArr(len2);

	for (int i = 0; i < len1; i++) {
		leftArr[i] = arr[start + i];
		counter++;
		counter1++;
	}
	for (int j = 0; j < len2; j++) {
		rightArr[j] = arr[mid + 1 + j];
		counter++;
		counter1++;
	}

	int i, j, k;
	i = 0;
	j = 0;
	k = start;

	while (i < len1 && j < len2) {
		counter1++;

		if (leftArr[i] <= rightArr[j]) {
			arr[k] = leftArr[i];
			counter++;
			counter1++;
			i++;
		}
		else {
			arr[k] = rightArr[j];
			counter++;
			j++;
		}
		k++;
	}

	while (i < len1) {
		counter1++;
		arr[k] = leftArr[i];
		counter++;
		i++;
		k++;
	}

	while (j < len2) {
		counter1++;
		arr[k] = rightArr[j];
		counter++;
		j++;
		k++;
	}
}

void mergeSort(vector<int>& arr, int start, int end) {
	if (start < end) {

		int mid = start + (end - start) / 2;
		mergeSort(arr, start, mid);
		mergeSort(arr, mid + 1, end);
		merge(arr, start, mid, end);
	}
}

// C++ implementation of above approach


const int MAX_SIZE = 1000;

// lookup table
int lookup_table[MAX_SIZE];

// create the lookup table
// for an array of length n
void create_table(int n)
{
	// power and count variable
	int pow = 1;
	int co = 0;
	do {
		// multiply by 2
		pow <<= 1;

		// initialize the lookup table
		lookup_table[co] = (n + (pow >> 1)) / pow;
	} while (lookup_table[co++] != 0);
}

// binary search
int binary(int arr[], int v)
{
	// mid point of the array
	int index = lookup_table[0] - 1;

	// count
	int co = 0;

	while (lookup_table[co] != 0) {

		// if the value is found
		if (v == arr[index])
			return index;

		// if value is less than the mid value
		else if (v < arr[index])
			index -= lookup_table[++co];

		// if value is greater than the mid value
		else
			index += lookup_table[++co];
	}
  return index;
}

// main function
int main()
{

	int arr[] = { 1, 3, 5, 6, 7, 8, 9 };
	int n = sizeof(arr) / sizeof(int);

	// create the lookup table
	create_table(n);

	// print the position of the array
	cout << "Position of 3 in array = "
		 << binary(arr, 3) << endl;

	return 0;
}
