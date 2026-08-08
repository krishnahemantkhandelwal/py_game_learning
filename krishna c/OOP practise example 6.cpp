#include <iostream>
using namespace std;

class student{
	public:
		string name;
	void input() {
		cout << "enter name: ";
		cin >> name;
	}
	void display() {
		cout << "name: " << name << endl;
	}
};

int main() {
	student s1, s2;
	cout << "s1: " << endl;
	s1.input();
	cout << "s2: " << endl;
	s2.input();
	s1.display();
	s2.display();
}
