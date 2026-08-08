#include <iostream>
using namespace std;

class Base{
	public:
		void display() {
			cout << "base class display function" << endl;
		}
};

class Derived:public Base{
	public:
		void display() {
			cout << "derived class display function" << endl;
		}
};

int main() {
	Base obj1;
	Derived obj2;
	obj1.display();
	obj2.display();
}
