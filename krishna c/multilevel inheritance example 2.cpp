#include <iostream>
using namespace std;

class A{
	public:
		int a;
	void get_A_data() {
		cout << "enter A data: ";
		cin >> a;
	}
};

class B:public A{
	public:
		int b;
	void get_B_data() {
		cout << "enter A data: ";
		cin >> b;
	}
};

class C:public B{
	public:
		int c;
	void get_C_data() {
		cout << "enter c data: ";
		cin >> c;
	}
	void sum() {
		cout << "sum: " << a+b+c << endl;
	}
};

int main() {
	C obj;
	obj.get_A_data();
	obj.get_B_data();
	obj.get_C_data();
	obj.sum();
}
