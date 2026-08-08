#include <iostream>
#include <string>
using namespace std;

int main() {
	string fullName;
	cout << "enter your full name: ";
	getline(cin, fullName);
	cout << "full name: " << fullName;
}
