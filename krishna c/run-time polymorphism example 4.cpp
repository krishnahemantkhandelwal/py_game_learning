#include <iostream>
using namespace std;

class Payment{
	public:
		virtual void pay() {
			cout << "Payment processing..." << endl;
		}
};

class UPI:public Payment{
	public:
		void pay() {
			cout << "Payment successful using UPI" << endl;
		}
};

int main() {
	Payment *p;
	UPI u;
	p=&u;
	p->pay();
}
