#include <iostream>
using namespace std;

class Student{
	int marks;
	public:
		void getdata() {
			cout << "enter marks: ";
			cin >> marks;
		}
		void operator==(Student s) {
			if(marks==s.marks) {
				cout << "marks are equal" << endl;
			} else {
				cout << "marks are not equal" << endl;
			}
		}
};

int main() {
	Student s1,s2;
	s1.getdata();
	s2.getdata();
	s1==s2;
}
