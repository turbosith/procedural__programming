#include <iomanip>
#include <cstdlib>
#include <iostream>
using namespace std;

struct MyList {  
    int  count_;
    int TicketNumber;
    string DestinationStation;
    int TrainNumber;
    int VanNumber;
    int SeatNumber;
    int Price;
    int SaleDate[3];
    int DepartureDate[3];
    int time[2];
    MyList* Head, * Tail, * Next, * Prev;
public:
    MyList() :Head(NULL), Tail(NULL), count_(0) {}; 
    void Add();
    void Show();
    void Del(int); 
    void Sortu();
    void createList( int n);
    ~MyList();
    void deletelater();
    void newlist(int data[3]);
};
void MyList::Add() {
    MyList* temp = new MyList;
    cout << "Введите номер билиета" << endl;
    cin >> temp->TicketNumber;
    cout << "Введите станцию назначения" << endl;
    cin >> temp->DestinationStation;
    cout << "Введите номер поезда" << endl;
    cin >> temp->TrainNumber;
    cout << "Введите номер вагона" << endl;
    cin >> temp->VanNumber;
    cout << "Введите номер места" << endl;
    cin >> temp->SeatNumber;
    cout << "Введите цену билета" << endl;
    cin >> temp->Price;
    cout << "Введите дату продажи" << endl;
    for (int i = 0; i < 3; i++) {
        cin >> temp->SaleDate[i];
    }
    cout << "Введите дату отправления поезда" << endl;
    for (int i = 0; i < 3; i++) {
        cin >> temp->DepartureDate[i];
    }
    cout << "Введите время в пути" << endl;
    cout << "Часы: ";
    cin >> temp->time[0];
    cout << " Минуты: ";
    cin >> temp->time[1];
    temp->Next = NULL;
    count_++;
    if (!Head) {
        temp->Prev = NULL;
        Head = temp;
        Tail = Head;
    }
    else {
        temp->Prev = Tail; 
        Tail->Next = temp; 
        Tail = temp;      
    }
}
void MyList::createList(int n) {
    for (int i = 1; i <= n; i++) {
        Add();
    }
}
void MyList::Show() {
    MyList* node = Head;
    cout << "List" << endl;
    cout << setw(12) << "Номер билета" << setw(3) << " | " << setw(18) << "Станция назначения" << setw(3) << " | " << setw(12) << "Номер поезда" << setw(3) << " | " << setw(12) << "Номер вагона" << setw(3) << " | " << setw(11) << "Номер места" << setw(3) << " | " << setw(11) << "Цена билета" << setw(3) << " | " << setw(12) << "Дата продажи" << setw(3) << " | " << setw(16) << "Дата отправления" << setw(3) << " | " << setw(12) << "Время в пути" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    while (node != 0) {//пока не найдем NULL в последнем узле
        cout << setw(12) << node->TicketNumber << setw(3) << " | " << setw(18) << node->DestinationStation << setw(3) << " | " << setw(12) << node->TrainNumber << setw(3) << " | " << setw(12) << node->VanNumber << setw(3) << " | " << setw(11) << node->SeatNumber << setw(3) << " | " << setw(11) << node->Price << setw(3) << " | " << setw(12) << node->SaleDate[0] << "." << node->SaleDate[1] << "." << node->SaleDate[2] << setw(3) << " | " << setw(16) << node->DepartureDate[0] << "." << node->DepartureDate[1] << "." << node->DepartureDate[2] << setw(3) << " | " << setw(12) << node->time[0] << ":" << node->time[1] << endl;
        cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        node = node->Next;
    }
    cout << endl;
}
void MyList::deletelater() {
    int realdate[3];
    realdate[0] = 11;
    realdate[1] = 04;
    realdate[2] = 2022;
    MyList* temp = Head;
    for (int i = 0; i < count_; i++,temp=temp->Next) {
        for (int j = 2; j >= 0; j--) {
            int d = temp->DepartureDate[0];
            d += d / 24;
            if (j != 0) {
                if (realdate[j] > temp->DepartureDate[j]) {
                    Del(i+1);
                    break;
                }
            }
            else {
                if (realdate[j] > d) {
                    Del(i+1);
                    break;
                }

            }
       }


    }
}
void MyList::Del(int x) {
    if (x == 1 && Head->Next)

    { 
        MyList* temp = Head;   
        Head = Head->Next;  
        Head->Prev = NULL; 
        delete temp;        
        count_--;       
        return;    
    }
    else if ((x == 1) && (Head == Tail)) { 

        Head->Next = NULL;  
        Head = NULL;
        delete Head;       
        count_ = 0;     
        return;         
    }
    if (x == count_) {
        MyList* temp = Tail;    
        Tail = Tail->Prev; 
        Tail->Next = NULL; 
        delete temp;   
        count_--;      
        return;     
    }
    MyList* temp = Head, * temp2; 
    for (int i = 0; i < x - 1; i++) temp = temp->Next;  

    temp2 = temp;  
    temp2->Prev->Next = temp->Next; 
    temp2->Next->Prev = temp->Prev; 
    delete temp; 
    count_--; 
}

MyList::~MyList() {
    while (Head) {
        Tail = Head->Next;
        delete Head;
        Head = Tail;

    }
}
void MyList::Sortu()
{
    MyList* p = Head;
  

    for (MyList* i = p; i != NULL && i->Next != NULL; i = i->Next)
    {
        for (MyList* j = p; j->Next != NULL; j = j->Next)
        {
            MyList* jj = j->Next;
            if (jj->TicketNumber < j->TicketNumber)
            {
                swap(jj->TrainNumber, j->TrainNumber);
                swap(jj->TicketNumber, j->TicketNumber);
                swap(jj->DestinationStation, j->DestinationStation);
                swap(jj->VanNumber, j->VanNumber);
                swap(jj->SeatNumber, j->SeatNumber);
                swap(jj->Price, j->Price);
                swap(jj->SaleDate, j->SaleDate);
                swap(jj->DepartureDate, j->DepartureDate);
                swap(jj->time, j->time);
                string DestinationStation;
            }
        }
    }
}
void MyList::newlist(int data[3]) {
    MyList* t = new MyList;
    MyList* h = NULL;
    MyList* ta = NULL;
    cout << "List" << endl;
    cout << setw(11) << "Номер билета" << setw(3) << " | " << setw(18) << "Станция назначения" << setw(3) << " | " << setw(12) << "Номер поезда" << setw(3) << " | " << setw(12) << "Номер вагона" << setw(3) << " | " << setw(11) << "Номер места" << setw(3) << " | " << setw(11) << "Цена билета" << setw(3) << " | " << setw(12) << "Дата продажи" << setw(3) << " | " << setw(16) << "Дата отправления" << setw(3) << " | " << setw(12) << "Время в пути" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    MyList* temp = Head;
    for (int i = 0; i < count_-1; i++,temp=temp->Next) {
        bool flag = 1;
        for (int j = 0; j < 3; j++) {
            if (temp->DepartureDate[j] != data[j]) {
                flag = 0;
            }
        }
        if (flag == 1) {
            t=temp;
            
            t->Next = NULL;
 
            if (!h) {
                t->Prev = NULL;
                h = t;
                ta = h;
            }
            else {
                t->Prev = ta;
                ta->Next = t;
                ta = t;
            }

        }
   }
    while (h != 0) {//пока не найдем NULL в последнем узле
        cout << setw(11) << h->TicketNumber << setw(3) << " | " << setw(18) << h->DestinationStation << setw(3) << " | " << setw(12) << h->TrainNumber << setw(3) << " | " << setw(12) << h->VanNumber << setw(3) << " | " << setw(11) << h->SeatNumber << setw(3) << " | " << setw(11) << h->Price << setw(3) << " | " << setw(12) << h->SaleDate[0] << "." << h->SaleDate[1] << "." << h->SaleDate[2] << setw(3) << " | " << setw(16) << h->DepartureDate[0] << "." << h->DepartureDate[1] << "." << h->DepartureDate[2] << setw(3) << " | " << setw(12) << h->time[0] << ":" << h->time[1] << endl;
        cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        h = h->Next;
    }
    cout << endl;
}

