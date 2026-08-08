#include <iostream>
using namespace std;

int main() {
	int choise;
	int a, b;
	while(choise==6) {
		cout << "Enter choise: " << endl;
		cout << "1.addition" << endl;
		cout << "2.subtraction" << endl;
		cout << "3.multiplication" << endl;
		cout << "4.division" << endl;
		cout << "5.modulus" << endl;
		cout << "6.exit" << endl;
		cout << "enter your choise: ";
		cin >> choise;
		if(choise>=1 && choise<=5) {
			cout << "enter 2 numbers: ";
			cin >> a >> b;
		}
		switch(choise) {
			case 1:
				cout << "Resuilt: " << a+b;
				break;
			case 2:
				cout << "Resuilt: " << a-b;
				break;
			case 3:
				cout << "Resuilt: " << a*b;
				break;
			case 4:
				cout << "Resuilt: " << a/b;
				break;
			case 5:
				cout << "Resuilt: " << a%b;
				break;
			case 6:
				cout << "exiting program";
				break;
			default:
				cout << "Invalid choise";
		}
	}
}
