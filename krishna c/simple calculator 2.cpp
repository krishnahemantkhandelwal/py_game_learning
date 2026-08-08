#include <iostream>
using namespace std;

int main() {
	int a,b;
	char op;
	cout << "enter 1st number:- ";
	cin >> a;
	cout << "choose your operator(+,-,*,/):- ";
	cin >> op;
	cout << "enter 2nd number:- ";
	cin >> b;
	switch(op) {
		case '+':
			cout << a << "+" << b << "=" << a+b << endl;
			break;
		case '-':
			cout << a << "-" << b << "=" << a-b << endl;
			break;
		case '*':
			cout << a << "*" << b << "=" << a*b << endl;
			break;
		case '/':
			cout << a << "/" << b << "=" << a/b << endl;
			break;
		default:
			cout << "invalid operator";
	}
}
