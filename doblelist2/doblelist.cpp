#include "doblelist.h"
int main() {
    setlocale(LC_ALL, "Russian");
    MyList List;
    cout << "¬ведите колличество билетов" << endl;
    int n;
    cin >> n;
    List.createList( n);
    List.Sortu();
    List.Show();
    cout << "„то сделать с билетами? " << endl << "0-если надо удалить билеты, пассажиры которых уже добрались" << endl << "1-если надо составить список из билетов с указанной датой отправлени€" << endl;
    bool destiny;
    cin >> destiny;
    if (destiny == 0) {
        List.deletelater();
        List.Show();
    }
    if (destiny == 1) {
        int data[3];
        cout << "¬ведите дату" << endl;
        for (int i = 0; i < 3; i++) {
            cin >> data[i];
        }
        List.newlist(data);
    }
}


