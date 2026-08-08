#include <iostream>
using namespace std;

int main() {
	int marks;
	cout << "enter marks: ";
	cin >> marks;
	if(marks>=90 && marks<=100) {
		cout << "Grade: A";
	}
	else if(marks>=75) {
		cout << "Grade: B";
	}
	else if(marks>=50) {
		cout << "Grade: C";
	}
	else if(marks<=50 && marks>=0) {
		cout << "Grade: D";
	}
	else {
		cout << "invalid marks";
	}
}
