#include <iostream>
using namespace std;

class animal{
	public:
		void eat() {
			cout << "Eating..." << endl;
		}
		void walk() {
			cout << "walking..." << endl;
		}
};

class dog:public animal{
	public:
		void bark() {
			cout << "barking.." << endl;
		}
};

int main() {
	dog d;
	d.eat();
	d.walk();
	d.bark();
}
