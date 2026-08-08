#include <iostream>
using namespace std;

class base_class_1{
	public:
		void show1() {
			cout << "this is show function of first base class" << endl;
		}
};

class base_class_2{
	public:
		void show2() {
			cout << "this is show functio of second class" << endl;
		}
};

class derived_class:public base_class_1,public base_class_2{
	public:
		void show3() {
			cout << "this is show function of derived calss" << endl;
		}
};

int main() {
	derived_class d1;
	d1.show1();
	d1.show2();
	d1.show3();
}
