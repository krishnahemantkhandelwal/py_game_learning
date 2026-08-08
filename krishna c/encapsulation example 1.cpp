#include <iostream>
using namespace std;

class Student{
	private:
		int age;
		string name;
	public:
		void setdata(int a, string n) {
			age = a;
			name = n;
		}
		void getdata() {
			cout << "age: " << age << endl;
			cout << "name: " << name << endl;
		}
};

int main() {
	Student s;
	s.setdata("krishna", 13);
	s.getdata();
}
