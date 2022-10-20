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
		cout << "������� ����� �������" << endl;
		cin >> q->TicketNumber;
		cout << "������� ������� ����������" << endl;
		cin >> q->DestinationStation;
		cout << "������� ����� ������" << endl;
		cin >> q->TrainNumber;
		cout << "������� ����� ������" << endl;
		cin >> q->VanNumber;
		cout << "������� ����� �����" << endl;
		cin >> q->SeatNumber;
		cout << "������� ���� ������" << endl;
		cin >> q->Price;
		cout << "������� ���� �������" << endl;
		for (int i = 0; i < 3; i++) {
			cin >> q->SaleDate[i];
		}
		cout << "������� ���� ����������� ������" << endl;
		for (int i = 0; i < 3; i++) {
			cin >> q->DepartureDate[i];
		}
		cout << "������� ����� � ����" << endl;
		cout << "����: ";
			cin >> q->time[0];
			cout << " ������: ";
			cin >> q->time[1];
		q->next = NULL;
		if (L == NULL) {//������ ����
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
	cout << setw(11) << "����� ������" << setw(3) << " | " << setw(18) << "������� ����������" << setw(3) << " | " << setw(12) << "����� ������" << setw(3) << " | " << setw(12) << "����� ������" << setw(3) << " | " << setw(11) << "����� �����" << setw(3) << " | " << setw(11) << "���� ������" << setw(3) << " | " << setw(12) << "���� �������" << setw(3) << " | " << setw(16) << "���� �����������" << setw(3) << " | " << setw(12) << "����� � ����" << endl;
	cout << "------------------------------------------------------------------------------------------------------" << endl;
	while (node != 0) {//���� �� ������ NULL � ��������� ����
		cout << setw(11) << node->TicketNumber << setw(3) << " | " << setw(18) << node->DestinationStation << setw(3) << " | " << setw(12) << node->TrainNumber << setw(3) << " | " << setw(12) << node->VanNumber << setw(3) << " | " << setw(11) << node->SeatNumber << setw(3) << " | " << setw(11) << node->Price << setw(3) << " | " << setw(12) << node->SaleDate[0]<<"."<< node->SaleDate[1] << "."<< node->SaleDate[2] << setw(3) << " | " << setw(16) <<  node->DepartureDate[0] << "." << node->DepartureDate[1] << "." << node->DepartureDate[3]  << setw(3) << " | " << setw(12) <<node->time[0]<<":"<< node->time[1] << endl;
		cout << "------------------------------------------------------------------------------------------------------" << endl;
		node = node->next;
	}
	cout << endl;
}
#endif