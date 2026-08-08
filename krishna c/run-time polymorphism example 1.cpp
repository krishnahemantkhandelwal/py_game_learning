#include <iostream>
using namespace std;

class Employee{
	public:
		virtual void salary() {
			cout << "Employee Salary Calculated" << endl;
		}
};

class Manager:public Employee{
	public:
		void Salary() {
			cout << "Manager Salary: 80000" << endl;
		}
};

int main() {
	Employee *e;
	Manager m;
	e=&m;
	e->salary();
}
