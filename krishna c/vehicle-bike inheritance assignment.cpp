#include <iostream>
using namespace std;

class vehicle{
	public:
		void refill() {
			cout << "refillig petrol..." << endl;
		}
		void breaking() {
			cout << "applying breaks..." << endl;
		}
};

class bike:public vehicle{
	public:
		void drive() {
			cout << "driving..." << endl;
		}
};

int main() {
	bike b1;
	b1.refill();
	b1.drive();
	b1.breaking();
}
