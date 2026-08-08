#include <iostream>
using namespace std;

class student{
	public:
		int rollNo;
		string name;
		student(string n, int r) {
			rollNo = r;
			name = n;
		}
	void display() {
		cout << "Name: " << name << endl;
		cout << "roll number: " << rollNo << endl;
	}
};

int main() {
	student s1("Krishna", 1);
	s1.display(); 
}
