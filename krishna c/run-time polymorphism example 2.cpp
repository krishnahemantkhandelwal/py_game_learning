#include <iostream>
using namespace std;

class Bank{
	public:
		virtual void interest() {
			cout << "bank interest" << endl;
		}
};

class SBI:public Bank{
	public:
		void interest() {
			cout << "SBI interest= 6.5%" << endl;
		}
};

int main() {
	Bank *b;
	SBI s;
	b=&s;
	b->interest();
}
