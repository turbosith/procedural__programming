#ifndef BASEH
#define BASEH
#include <vector> 
#include <string> 
class Base;
class Base {
private:         std::string name;         Base* parent;         int status; protected:
std::vector<Base*> children; public:
    Base(Base* parent, std::string name, int status);
    void set_name(std::string new_name);         std::string get_name();

    void set_parent(Base* new_parent);
    Base* get_parent();
    void print_tree();         void print_status_tree();

    void add_child(Base* h);

    Base* get_by_name(std::string name);
};
#endif
