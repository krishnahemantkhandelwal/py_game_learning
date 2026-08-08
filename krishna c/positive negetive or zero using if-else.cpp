#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "enter a number:-";
	cin >> num;
	if(num>0) {
		cout << "number is positive";
	}
	else if(num==0) {
		cout << "number is zero";
	}
	else {
		cout << "number is negetive";
	}
}
