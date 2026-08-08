#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	int ch;
	cout << "Press\n1.addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
	cin >> ch;
	switch(ch) {
		case 1:
			cout << "enter 2 numbers:- ";
			cin >> a >> b;
			c = a+b;
			cout << "sum is " << c;
			break;
		case 2:
			cout << "enter 2 numbers:- ";
			cin >> a >> b;
			c = a-b;
			cout << "differenceis " << c;
			break;
		case 3:
			cout << "enter 2 numbers:- ";
			cin >> a >> b;
			c = a*b;
			cout << "product is " << c;
			break;
		case 4:
			cout << "enter 2 numbers:- ";
			cin >> a >> b;
			c = a/b;
			cout << "quotient is " << c;
			break;
		default:
			cout << "Invalid operator";
			break;
	}
}
