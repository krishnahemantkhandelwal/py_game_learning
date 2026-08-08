#include <iostream>
using namespace std;

void add(int a,int b) {
	cout << "addition is: " << a+b << endl;
}

int main() {
	int a, b;
	cout << "enter 2 numbers: ";
	cin >> a >> b;
	add(a, b);
}
