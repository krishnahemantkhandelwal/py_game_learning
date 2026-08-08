#include <iostream>
using namespace std;

int main() {
	int a= 50;
	int *p= &a;
	int **q= &p;
	cout << "value of a: " << a << endl;
	cout << "addres of a:" << p << endl;
	cout << "adress of p: " << q << endl;
}
