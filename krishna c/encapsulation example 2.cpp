#include <iostream>
using namespace std;

class Employee{
	private:
		int salary;
	public:
		void setSalary(int n) {
			salary = n;
		}
		int getSalary() {
			return salary
		}
};

int main() {
	Employee myObj;
	myObj.setSalary(100000);
	cout << myObj.getSalary() << endl;
}
