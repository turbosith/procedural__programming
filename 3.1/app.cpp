#include <iostream>
#include <string>
#include "app.h"
#include "a.h"
#include "b.h" 
#include "c.h" 
using namespace std; 
App::App(Base * parent): 
    Base(parent, "", 1){};
void App::build_tree() {
    string s1, s2;
    int class_type = 0, status;
          
      cin >> s1;
    //  Задаем имя корня
    this->set_name(s1);

         while (true){
            //  Считывание двух строк, разделенных пробелом
    cin >> s1;
  if (s1 == "endtree"){                         break;
}
cin >> s2 >> class_type >> status;

//  Находим элемент с именем s1
Base* b = this->get_by_name(s1);
                 if (class_type == 2){
b->add_child(new A(b, s2, status));
                }
else if (class_type == 3) {
b->add_child(new B(b, s2, status));
                }
else if (class_type == 4) {
b->add_child(new C(b, s2, status));
                }
        }
}
void App::run() { cout << "Test result\n";         this->print_status_tree(); }
