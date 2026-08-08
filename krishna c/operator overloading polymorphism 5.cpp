#include <iostream>
using namespace std;

class Employee{
	int salary;
	public:
		void getdata() {
			cout << "enter salary: ";
			cin >> salary;
		}
		void operator +(Employee e) {
			Employee temp;
			temp.salary = salary + e.salary;
			return temp;
		}
		void display() {
			cout<<"Total Salary = "<<salary;
		}
};

int main() {
	Employee e1,e2,e3;
	e1.getData();
	e2.getData();
	e3 = e1 + e2;
	e3.display();
}
