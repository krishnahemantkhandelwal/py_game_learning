#include <iostream>
using namespace std;

int main() {
	int age = 25;
	char citizenship = "Y";
	if(age>=18) {
		if(citizenship=="Y") {
			cout << "person can vote";
		} else {
			cout << "Person is not a citizen";
		}
	} else {
		cout << "Person is underage";
	}
}
