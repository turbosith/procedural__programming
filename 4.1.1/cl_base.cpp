#include "cl_base.h"
#include <string>
#include <iomanip>

cl_base::cl_base(cl_base* parent, string object_name)
{
	this->object_name = object_name;
	this->parent = parent;
	if (parent != nullptr) parent->children.push_back(this);
}
void cl_base::set_name(string name)
{
	this->object_name = name;
}
cl_base* cl_base::get_parent()
{
	return parent;
}
string cl_base::get_name()
{
	return object_name;
}
void cl_base::print_tree() {
	int m = 0;
	if (children.size() != 0) {
		{
		if (this->parent == nullptr) {
			cout << object_name ;
		}
		else {
			cl_base* p = this;
			while (p->parent != nullptr) {
				m += 1;
				p = p->parent;
			}
			for (int i = 0; i < m; i++) {
				cout << endl;
				cout << "    ";
			}
			cout << object_name ;
		}
		for (int i = 0; i < children.size(); i++)
		{
			if (children[i]->children.size() == 0)
			{
				cout << endl;
				for (int i = 0; i < m + 1; i++) {
					cout << "    ";
				}

				cout << children[i]->get_name() ;
			}
			children[i]->print_tree();
		}

		}
	}
}
void cl_base::print_status_tree() {
	int m = 0;
	if (children.size() != 0) {
		{
			if (this->parent == nullptr) {
				cout << object_name;
			}
			else {
				cl_base* p = this;
				while (p->parent != nullptr) {
					m += 1;
					p = p->parent;
				}
				for (int i = 0; i < m; i++) {
					cout << endl;
					cout << "    ";
				}
				cout << object_name;
			}
			if (this->i_state != 0) {
				cout << " is ready";
			}
			else {
				cout << " is not ready";
			}
			for (int i = 0; i < children.size(); i++)
			{
				if (children[i]->children.size() == 0)
				{
					cout << endl;
					for (int i = 0; i < m + 1; i++) {
						cout << "    ";
					}
					cout << children[i]->get_name();
					if (children[i]->i_state != 0) {
						cout << " is ready";
					}
					else {
						cout << " is not ready";
					}
				}
				children[i]->print_status_tree();
			}

		}
	}
	}
void cl_base::set_status(int stat) {
	if (stat != 0) {
		bool flag = 1;
			if (this->parent == nullptr) {
				this->i_state = stat;

			}
			else {
				cl_base* p = this->parent;
				while (p->parent != nullptr) {
					if (p->i_state == 0) {
						flag = 0;
						cout << "-----------" << i_state << object_name <<flag<<p->i_state<< endl;
						break;

					}
					p = p->parent;
				}
				if (flag == 1) {
					this->i_state = stat;
				}
			}
			cout << "-----------"<<i_state << object_name << endl;
	}
	else {
		this->i_state = 0;
		for (int i = 0; i < children.size(); i++) {
			children[i]->i_state = 0;

		}
		for (int i = 0; i < children.size(); i++) {
			children[i]->set_status(0);
		}
	}
}
void cl_base::set_parent(cl_base* parent) {
	if (parent == nullptr || this->parent == nullptr) {
		return;
	}
	else {
		for (int i = 0; i < children.size(); i++) {
			if (children[i] == this) {
				parent->children.erase(children.begin() + i);
			}
		}
		this->parent = parent;
		parent->children.push_back(this);
	}
}

cl_base::~cl_base() {
	for (int i = 0; i < children.size(); i++) {

		delete children[i];
	}
}
cl_base* cl_base::get_by_name(string name) {
	if (this->object_name == name) {
		return this;
	}
	for (int i = 0; i < this->children.size(); ++i) {
		cl_base* b = children[i]->get_by_name(name);
		if (b != nullptr)
			return b;
	}
	return nullptr;
}
/*cout  << this->object_name;
	if (this->i_state != 0) {
		cout << " is ready";
	}
	else {
		cout << " is not ready";
	}
	if (this->children.size()) {
		cout << "\n";
	}
	for (int i = 0; i < this->children.size(); ++i) {
		this->children[i]->print_status_tree();
		if (i != this->children.size() - 1)
			cout << "\n";
	}         return;
}*/