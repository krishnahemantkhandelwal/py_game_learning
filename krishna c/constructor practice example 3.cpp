#include <iostream>
using namespace std;

class Bank{
	public:
		int accountNo;
		string holdername;
		float balance;
		Bank(int a, string h, float b) {
			accountNo= a;
			holdername= h;
			balance= b;
		}
	void display() {
		cout << "account number: " << accountNo << endl;
		cout << "holder name: " << holdername << endl;
		cout << "balance: " << balance << endl;
	}
};

int main() {
	Bank b1(101, "Krishna", 50000);
	b1.display();
}
