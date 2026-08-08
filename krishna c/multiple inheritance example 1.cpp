#include <iostream>
using namespace std;

class A{
	public:
		int a;
		void get_a() {
			cout << "enter value of a: ";
			cin >> a;
		}
};

class B{
	public:
		int b;
		void get_b() {
			cout << "enter value of b: ";
			cin >> b;
		}
};

class C:public A,public B{
	public:
	void display() {
		cout << "value of a: " << a << endl;
		cout << "value of b: " << b << endl;
		cout << "addition: " << a+b << endl;
	}
};
int main() {
	C c;
	c.get_a();
	c.get_b();
	c.display();
}
