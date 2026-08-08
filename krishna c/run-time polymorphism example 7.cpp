#include <iostream>
using namespace std;

class Recharge{
	public:
		virtual void recharge() {
			cout << "Recharged processing" << endl;
		}
};

class airtel:public Recharge{
	public:
		void recharge() {
			cout << "airtel recharge successful" << endl;
		}
};

int main() {
	Recharge r;
	airtel a;
	r=&a;
	r->recharge();
}
