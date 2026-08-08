#include <iostream>
using namespace std;

int add(int a, int b) {
	return a+b;
}

int main() {
	int a, b, c;
	cout << "enter 2 numbers: ";
	cin >> a >> b;
	c= add(a,b);
	cout << "addition is: " << c; 
}
