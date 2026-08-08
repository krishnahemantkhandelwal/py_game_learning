#include <iostream>
using namespace std;

class student{
	public:
		string name;
		student(string n) {
			name= n;
		}
		student(const student s&) {
			name= s.name;
		}
	void display() {
		cout << "Name: " << name << endl;
	}
};

int main() {
	student s1("krishna");
	student s2= s1;
	s2.display();
	s1.display();
}
