#include <iostream>
using namespace std;

class bankaccount{
	public:
		int accountNo;
		string name;
		float balance;
	void getdata() {
		cout << "enter account number: ";
		cin >> accountno;
		cout << "enter name: ";
		cin >> name;
		cout << "enter balance: ";
		cin >> balance;
	}
	void display() {
		cout << "account name: " << name << endl;
		cout << "account number: " << accountNo << endl;
		cout << "balance: " << balance << endl;
	}
};

int main() {
	bankaccount b;
	b.getdata();
	b.display();
}
