#include "cl_base.h"
#include <string>
#include <iomanip>
cl_base::cl_base(cl_base* parent, string object_name){
	this->object_name = object_name;
	this->parent = parent;
	if (parent != nullptr)
		parent->children.push_back(this);
}
void cl_base::set_name(string name){
	this->object_name = name;}
cl_base* cl_base::get_parent(){
	return parent;}
string cl_base::get_name(){
	return object_name;}
void cl_base::print_tree() {
	int m = 0;
	if (children.size() != 0) {   
		{if (this->parent == nullptr) {
			cout << object_name ;}
		else {cl_base* p = this;
		while (p->parent != nullptr) {
			m += 1;
			p = p->parent;
		}       
		cout << endl; 
		for (int i = 0; i < m; i++) { 
			cout << "    "; }
		cout << object_name;
		}
		for (int i = 0; i < children.size(); i++) {
			if (children[i]->children.size() == 0) {
				cout << endl;
				for (int i = 0; i < m + 1; i++) {
					cout << "    "; }
				cout << children[i]->get_name();
			}
			children[i]->print_tree(); 
		}       
		}
	}
}void cl_base::print_status_tree() {
	int m = 0; 
	if (children.size() != 0) {
		{
			if (this->parent == nullptr) {
				cout << object_name; }
		else { 
				cl_base* p = this; 
				while (p->parent != nullptr) {
					m += 1; p = p->parent; }      
				cout << endl;
				for (int i = 0; i < m; i++) {
					cout << "    "; 
				}
				cout << object_name;
			}
			if (this->i_state != 0) {
				cout << " is ready"; }
		else { cout << " is not ready"; }
			for (int i = 0; i < children.size(); i++) {
			if (children[i]->children.size() == 0) {
				cout << endl;
				for (int i = 0; i < m + 1; i++) {
					cout << "    "; }
				cout << children[i]->get_name();
				if (children[i]->i_state != 0) {
					cout << " is ready"; 
				}
				else {
					cout << " is not ready"; 
				}
			}
			children[i]->print_status_tree();
			}        }
	}
}void cl_base::set_status(int stat)
{ if (stat != 0) 
{ bool flag = 1;
if (this->parent == nullptr) {
	this->i_state = stat;
}
else { 
	cl_base* p = this->parent; 
	while (p->parent != nullptr)
	{ if (p->i_state == 0)
	{ flag = 0; break; }
	p = p->parent; }
	if (flag == 1) { this->i_state = stat;
	} } } 
else { this->i_state = 0;
for (int i = 0; i < children.size(); i++) {
	children[i]->i_state = 0;
}
for (int i = 0; i < children.size(); i++) { 
	children[i]->set_status(0); 
} } }
void cl_base::set_parent(cl_base* parent) {
	if (parent == nullptr || this->parent == nullptr) { 
		return; }
	else {
		for (int i = 0; i < children.size(); i++) { 
			if (children[i] == this) 
			{ parent->children.erase(children.begin() + i);
			} }
		this->parent = parent;
		parent->children.push_back(this);
	}
}
cl_base::~cl_base() {
	for (int i = 0; i < children.size(); i++) 
	{ delete children[i]; } }
cl_base* cl_base::get_by_name(string name) {
	cl_base* res = nullptr;
	if (this->object_name == name) return this;
	else {
		for (int i = 0; i < this->children.size(); i++) {
			

				res = children[i]->get_by_name(name);
			if (res != nullptr) return res;
		}
	}
	return nullptr;
}
cl_base* cl_base::poisk(string name) {
	cl_base* root = this;

	while (root->parent != nullptr) {
		root = root->parent;
	}
	
	return root->get_by_name(name);
}

	cl_base* cl_base::get_object_by_indicator(string way) {
		if (way.find("//") == 0) { 
			if (parent == nullptr)
				return this->poisk(way.erase(0, 2)); 
			else
				return parent->get_object_by_indicator(way);

		}

		else if (way == "/") {
			if (parent == nullptr)
				return this; 
			else
				return parent->get_object_by_indicator(way);
		}

		else if (way[0] == '/') { 
			if (parent == nullptr)
				return this->get_object_by_indicator(way.erase(0, 1)); 
			else
				return parent->get_object_by_indicator(way);
		}

		else if (way == ".") 
			return this; 

		else if (way.find("/") != -1 && way.find("/") != 0) { 
				string s = way, name_of_obj;
			for (int i = 0; i < way.find("/"); i++) {
				name_of_obj.push_back(way[i]);
				s.erase(0, 1);
			}

			for (int i = 0; i < children.size(); i++) {
				if (children[i]->get_name() == name_of_obj)
					return children[i] ->get_object_by_indicator(s.erase(0, 1));
			}
		}

		else {
			for (int i = 0; i < children.size(); i++) {
				if (children[i]->get_name() == way) return children[i];
				

			}
		}

		return nullptr;
	}



