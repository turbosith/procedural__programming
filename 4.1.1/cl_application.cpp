#include "cl_application.h"
#include "cl2.h"
#include "cl3.h"
#include "cl4.h"
#include "cl5.h"
#include "cl6.h"
cl_application::cl_application(cl_base* parent = nullptr) :cl_base(parent)
{
}
void cl_application::bild_tree() {
	
	int cl_number;
	string name1, name2;
	cin >> name1;
	this->set_name(name1);
	cl_base* obj1 = this;
	cl_base* obj2;
	while (true)
	{
		cin >> name1;
		if (name1 == "endtree") {
			break;
		}
			cin>> name2>>cl_number;
		if (cl_number == 2) {
			obj2 = new cl2(this->get_by_name(name1), name2);
		}
		else if (cl_number == 3) {
			obj2 = new cl3(this->get_by_name(name1), name2);
		}
		else if (cl_number == 4) {
			obj2 = new cl4(this->get_by_name(name1), name2);
		}
		else if (cl_number == 5) {
			obj2 = new cl5(this->get_by_name(name1), name2);
		}
		else   {
			obj2 = new cl6(this->get_by_name(name1), name2);
		}
		
		obj1 = obj2;
	}


}

int cl_application::exec_app()
{
	string name1;
	int status;
	cin >> name1 >> status;
	while (status != 228) {
		
		cl_base* bb = this->get_by_name(name1);
		bb->set_status(status);
		cin >> name1 >> status;
	}
	cout << "Object tree" <<endl;
	this->print_tree();
	cout << endl;
	cout << "The tree of objectsand their readiness" << endl;
	this->print_status_tree();
	return 0;
}