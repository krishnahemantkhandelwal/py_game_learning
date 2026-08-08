#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	cout << "enter 2 numbers:-";
	cin >> num1 >> num2;
	if(num1>num2) {
		cout << "num1 is greater";
	}
	else if(num1<num2) {
		cout << "num2 is greater";
	}
	else {
		cout << "both numbers are equal";
	}
}
