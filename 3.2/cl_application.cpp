#include "cl_application.h"
#include "cl2.h"
#include "cl3.h"
#include "cl4.h"
#include "cl5.h"
#include "cl6.h"
cl_application::cl_application(cl_base* parent = nullptr) :cl_base(parent){}
void cl_application::bild_tree()
{
	string name1, name2;
	cin >> name1;
	int num_cl;
	cl_base* obj1;
	cl_base* obj2;
	this->set_name(name1);
	obj1 = this;
	while (true) {
		cin >> name1;
		if (name1 == "endtree") {
			return;
		}
		cin >> name2 >> num_cl;
		obj2 = get_object_by_indicator(name1);
			if (obj2 != nullptr) {
				switch (num_cl) {
				case 2:
					obj2 = new cl2(obj2, name2);
					break;
				case 3:
					obj2 = new cl3(obj2, name2);
					break;
				case 4:
					obj2 = new cl4(obj2, name2);
					break;
				case 5:
					obj2 = new cl5(obj2, name2);
					break;
				case 6:
					obj2 = new cl6(obj2, name2);
					break;
				}
			}
			else {
				cout << "Object tree" << endl;
				print_tree();
				cout << endl << "The head object " << name1 << " is not found";
					exit(0);
			}
	}
}

int cl_application::exec_app() {
	cout << "Object tree" << endl;
	print_tree();
	string s = "", coordinate;
	cl_base* obj1 = this, * obj2;
	while (true) {
		cin >> s;
		if (s == "END") break;
		cout << endl;
		cin >> coordinate;
		if (s == "FIND") {
			obj2 = obj1->get_object_by_indicator(coordinate);
				if (obj2 != nullptr) {
					cout << coordinate << " Object name: " << obj2 -> get_name();
				}
				else cout << coordinate << " Object is not found";
		}
		else if (s == "SET") {
			obj2 = obj1->get_object_by_indicator(coordinate);
				if (obj2 != nullptr) {
					obj1 = obj2;
					cout << "Object is set: " << obj1->get_name();
				}
				else cout << coordinate << " Object is not found" << obj1 -> get_name();
		}

	}
	return 0;
}
	