#include <iostream>
using namespace std;

class A{
	public:
		void show() {
			cout << "This is parent class" << endl;
		}
};

class B:public A{
	public:
		void show2() {
			cout << "This is son class";
		}
};

int main() {
	B b;
	b.show();
	b.show2();
}
