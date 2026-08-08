#include <iostream>
using namespace std;

class BankAccount{
	private:
		double balance;
	public:
		BankAccount(double initialbalance) {
			balance = initialbalance;
		}
		void deposit(double amount) {
			if(amount > 0) {
				balance += amount;
				cout << "deposited: " << amount << endl;
			} else {
				cout << "invalid amount" << endl;
			}
		}
		void withdraw(double amount) {
			if(amount>0 && amount<=balance) {
				balance = amount;
				cout << "withdrawn: " << amount << endl;
			} else {
				cout << "insufficient amount or invalid amount" << endl;
			}
		}
		void displaybalance() {
			cout << "current balance: " << balance << endl;
		}
};

int main() {
	BankAccount MyAccount(100);
	MyAccount.deposit(500)
	MyAccount.withdraw(200)
	MyAccount.displaybalance();
}
