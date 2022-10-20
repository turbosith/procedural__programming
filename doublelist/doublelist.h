#ifndef _DOBLELIST_H_
#define _DOBLELIST_H_
#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
struct Tnode {
	Tnode* prev;
	Tnode* next;
	int TicketNumber;
	string DestinationStation;
	int TrainNumber;
	int VanNumber;
	int SeatNumber;
	int Price;
	int SaleDate[3];
	int DepartureDate[3];
	int time[2];
};
void createList(Tnode*& L, int n) {
	Tnode* q = L;
	Tnode* q1 = NULL;
	Tnode* list=new Tnode[n];
	for (int i = 1; i <= n; i++) {
		q = new Tnode;
		cout << "Введите номер билиета" << endl;
		cin >> q->TicketNumber;
		cout << "Введите станцию назначения" << endl;
		cin >> q->DestinationStation;
		cout << "Введите номер поезда" << endl;
		cin >> q->TrainNumber;
		cout << "Введите номер вагона" << endl;
		cin >> q->VanNumber;
		cout << "Введите номер места" << endl;
		cin >> q->SeatNumber;
		cout << "Введите цену билета" << endl;
		cin >> q->Price;
		cout << "Введите дату продажи" << endl;
		for (int i = 0; i < 3; i++) {
			cin >> q->SaleDate[i];
		}
		cout << "Введите дату отправления поезда" << endl;
		for (int i = 0; i < 3; i++) {
			cin >> q->DepartureDate[i];
		}
		cout << "Введите время в пути" << endl;
		cout << "Часы: ";
			cin >> q->time[0];
			cout << " Минуты: ";
			cin >> q->time[1];
		q->next = NULL;
		if (L == NULL) {//список пуст
			L = q; q1 = L;
		}
		else {
			q1->next = q;
			q->prev = q1;
			q1 = q;
		}

	}
	Tnode* im = L;
	Tnode* j = L;
	L->prev = NULL;
	cout << L->TicketNumber << "fdsf" << endl;
	for (int i=0; i<n-1; im = im->next,i++) {
		for (int jj=0; jj<n-1; j = j->next,jj++) {
			cout << im->TicketNumber << j->TicketNumber;
			if (j->TicketNumber < im->TicketNumber&&im->prev!=NULL) {
				im->next = j->next;
				j->prev = im->prev;
				j->next = im;
				im->prev = j;
				cout << "beb";


			}
			
			if (j->TicketNumber < im->TicketNumber && im->prev == NULL) {
				Tnode* p = im;
				im->next = j->next;
				j->prev = im->prev;
				j->next = im;
				im->prev = j;
				L = j;	
			}
			cout << "bib";
		}
		cout << "bob";
	}


}
void outList(Tnode* L) {
	Tnode* node = L;
	cout << "List" << endl;
	cout << setw(11) << "Номер билета" << setw(3) << " | " << setw(18) << "Станция назначения" << setw(3) << " | " << setw(12) << "Номер поезда" << setw(3) << " | " << setw(12) << "Номер вагона" << setw(3) << " | " << setw(11) << "Номер места" << setw(3) << " | " << setw(11) << "Цена билета" << setw(3) << " | " << setw(12) << "Дата продажи" << setw(3) << " | " << setw(16) << "Дата отправления" << setw(3) << " | " << setw(12) << "Время в пути" << endl;
	cout << "------------------------------------------------------------------------------------------------------" << endl;
	while (node != 0) {//пока не найдем NULL в последнем узле
		cout << setw(11) << node->TicketNumber << setw(3) << " | " << setw(18) << node->DestinationStation << setw(3) << " | " << setw(12) << node->TrainNumber << setw(3) << " | " << setw(12) << node->VanNumber << setw(3) << " | " << setw(11) << node->SeatNumber << setw(3) << " | " << setw(11) << node->Price << setw(3) << " | " << setw(12) << node->SaleDate[0]<<"."<< node->SaleDate[1] << "."<< node->SaleDate[2] << setw(3) << " | " << setw(16) <<  node->DepartureDate[0] << "." << node->DepartureDate[1] << "." << node->DepartureDate[3]  << setw(3) << " | " << setw(12) <<node->time[0]<<":"<< node->time[1] << endl;
		cout << "------------------------------------------------------------------------------------------------------" << endl;
		node = node->next;
	}
	cout << endl;
}
#endif