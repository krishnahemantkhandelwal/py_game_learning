#include <iostream>
using namespace std;

class employee{
	public:
		int id;
		string name;
		float salary;
		employee(string n, int i, float s) {
			id = i;
			name= n;
			salary = s;
		}
	void display() {
		cout << "employee id: " << id << endl;
		cout << "name: " << name << endl;
		cout << "salary: " << salary << endl;
	}
};

int main() {
	employee emp1("Krishna", 101, 50000);
	emp1.display();
}
