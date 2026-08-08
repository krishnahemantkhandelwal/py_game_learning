#include <iostream>
using namespace std;

int add() {
	int a,b;
	cout << "enter 2 numbers: ";
	cin >> a >> b;
	return a+b;
}

int main() {
	int c= add();
	cout << "addition is: " << c;
}
