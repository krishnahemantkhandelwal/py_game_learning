#include <iostream>
using namespace std;

class Animal{
	public:
		void eat() {
			cout << "eating" << endl;
		}
};

class Dog:public Animal{
	public:
		void eat() {
			cout << "eating bread..." << endl;
		}
};

int main() {
	Dog d;
	d.eat();
}
