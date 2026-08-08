#include <iostream>
using namespace std;

class Bank{
	int balance;
	public:
		void getdata() {
			cout << "enetr marks: ";
			cin >> balance;
		}
		void operator +(Bank b) {
			Bank temp;
			temp.balance= balance+ b.balance;
		}
		void display() {
			cout << "total balance: " << balance << endl;
		}
};

int main() {
	Bank b1, b2, b3;
	b1.getdata();
	b1.getdata();
	b3= b1+b2;
	b3.display();
}
