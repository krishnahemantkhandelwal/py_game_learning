#include <iosream>
using namespace std;

class employee{
	public:
		int empid;
		string name;
		int salary;
};

int main() {
	employee emp;
	emp.empid= 101;
	emp.name= "krishna";
	emp.salary= 100000;
	cout << "name: " << emp.name << endl;
	cout << "employee id: " << emp.empid << endl;
	cout << "salary: " << emp.salary << endl;
}
