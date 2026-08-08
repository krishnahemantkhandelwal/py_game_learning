#include <iostream>
using namespace std;

class Vehicle{
	public:
		virtual void start() {
			cout << "started..." << endl;
		}
};

class Car:public Vehicle{
	public:
		void start() {
			cout << "car started with push button" << endl;
		}
};

int main() {
	Vehicle v;
	Car c;
	v=&c;
	v->start();
}
