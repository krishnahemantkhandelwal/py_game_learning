#include <iostream>
using namespace std;

int main() {
	int marks = 70;
	if(marks>=40) {
		if(marks>=70) {
			cout << "Student passed with distinction";
		} else {
			cout << "student has passed";
		}
	} else {
		cout << "stuent has failed";
	}
}
