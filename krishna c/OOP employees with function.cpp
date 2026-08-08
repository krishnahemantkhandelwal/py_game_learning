#include <iostream>
using namespace std;

class employee{
	public:
		int empid;
		string name;
		int salary;
	void show() {
		cout << "enter employee id: ";
		cin >> empid;
		cout << "enter employee name: ";
		cin >> name;
		cout << "enter employee salary: ";
		cin >> salary;
		cout << "id: " << id << endl;
		cout << "name: " << name << endl;
		cout << "salary: " << salary << endl;
	}
};

int main() {
	student s1, s2;
	s1.show();
	s2.show();
}
