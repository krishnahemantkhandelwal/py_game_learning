#include <iostream>
using namespace std;

class student{
	public:
		int id;
		string name;
	void show() {
		cout << "Enter name: ";
		cin >> name;
		cout << "enter id: ";
		cin >> id;
		cout << "name is " << name << endl << "id is " << id << endl;
	}
};

int main() {
	student s1, s2;
	s1.show();
	s2.show();
}
