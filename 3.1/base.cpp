#include "base.h"
#include <iostream>
#include <vector> 
#include <string> 
using namespace std;

void Base::set_name(string new_name) {
    this->name = new_name;
    return;
}
string Base::get_name() {
    return this->name;
}

void Base::set_parent(Base* new_parent) {
    this->parent = new_parent;
    return;
}
Base::Base(Base* parent, string name, int status = 0) {
    this->parent = parent;         this->name = name;         this->status = status;
}

Base* Base::get_parent() {
    return this->parent;
}
void Base::print_tree() {
    if (!this->children.size())                 return;

          cout << this->name;
            for (int i = 0; i < this->children.size(); ++i){              
                cout << "  ";
    cout << this->children[i]->get_name();
}

//  Вызываем аналогичную функцию у детей
bool w = false;
for (int i = 0; i < this->children.size(); ++i) {
    if (this->children[i]->children.size() && !w) {
        cout << "\n";                         w = true;
    }
    this->children[i]->print_tree();
}         return;
}
void Base::print_status_tree() {
    cout << "The object " << this->name;
            if (this->status > 0){    
                cout << " is ready";
}
else {
cout << " is not ready";
        }

        if (this->children.size()) {
            cout << "\n";
        }

                for (int i = 0; i < this->children.size(); ++i){      
                    this->children[i]->print_status_tree();          
                    if (i != this->children.size() - 1)               
                        cout << "\n";
        }         return; }

        void Base::add_child(Base* h) {
            this->children.push_back(h);         return;
        }


        Base* Base::get_by_name(string name) {
            if (this->name == name) {
                return this;
            }
            for (int i = 0; i < this->children.size(); ++i) {
                Base* b = children[i]->get_by_name(name);                       
                if (b != NULL)                               
                    return b;
            }
            return nullptr;
        }
