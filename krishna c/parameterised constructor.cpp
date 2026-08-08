#include <iostream>
using namespace std;

class Student{
	public:
		string name;
		int age;
		Student(string n, int a) {
			name = n;
			age = a
		}
	void display() {
		cout << "Name: " << name << endl << "age: " << age << endl;
	}
};

int main() {
	Student s1("Krishna", 13);
	s1.display();
}
