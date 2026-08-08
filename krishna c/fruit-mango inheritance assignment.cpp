#include <iostream>
using namespace std;

class fruit{
	public:
		void eat() {
			cout << "eating fruit..." << endl;
		}
		void rot() {
			cout << "food rotten..." << endl;
		}
};

class mango:public fruit{
	public:
		void sweet() {
			cout << "food is sweet";
		}
};

int main() {
	mango m1;
	m1.eat();
	m1.sweet();
	m1.rot();
}
