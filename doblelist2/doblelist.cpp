#include "doblelist.h"
int main() {
    setlocale(LC_ALL, "Russian");
    MyList List;
    cout << "������� ����������� �������" << endl;
    int n;
    cin >> n;
    List.createList( n);
    List.Sortu();
    List.Show();
    cout << "��� ������� � ��������? " << endl << "0-���� ���� ������� ������, ��������� ������� ��� ���������" << endl << "1-���� ���� ��������� ������ �� ������� � ��������� ����� �����������" << endl;
    bool destiny;
    cin >> destiny;
    if (destiny == 0) {
        List.deletelater();
        List.Show();
    }
    if (destiny == 1) {
        int data[3];
        cout << "������� ����" << endl;
        for (int i = 0; i < 3; i++) {
            cin >> data[i];
        }
        List.newlist(data);
    }
}


