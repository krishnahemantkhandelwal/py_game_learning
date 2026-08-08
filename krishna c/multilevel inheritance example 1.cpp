#include <iostream>
using namespace std;

class animal{
	public:
	void eat() {
		cout << "Eating..." << endl;
	}
};

class dog:public animal{
	public:
	void bark() {
		cout << "barking..." << endl;
	}
};

class babydog:public dog{
	public:
	void weep() {
		cout << "weeping..." << endl;
	}
};

int main() {
	babydog d1;
	d1.eat();
	d1.bark();
	d1.weep();
}


