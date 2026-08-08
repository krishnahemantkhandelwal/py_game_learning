#include <iostream>
using namespace std;

class A{
	int a= 4;
	int b= 5;
	public:
		int mul() {
			return a*b;
		}
};

class B:private A{
	public:
		void display() {
			cout << "multiplication: " << mul() << endl;
		}
};

int main() {
	B b;
	b.display();
}
