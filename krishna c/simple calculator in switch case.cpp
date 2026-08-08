#include <iostream>
using namespace std;

int main() {
	int num1, num2
	int op;
	cout << "enter 2 numbers: ";
	cin >> num1 >> num2;
	cout << "enter operator\n1.Addition\n2.subtraction\n3.multiplication\n4.division" << endl;
	cin >> op;
	switch(op) {
		case 1:
			cout << "sum: " << num1+num2;
			break;
		case 2:
			cout << "difference: " << num1-num2;
			break;
		case 3:
			cout << "product: " << num1*num2;
			break;
		case 4:
			cout << "quotient: " << num1/num2;
			break;
		default:
			cout << "invalid operator";
			break;
	}
}
