#include <iostream>
using namespace std;

class disha{
	public:
		virtual void display() {
			cout << "welcome to disha computer institute" << endl;
		}
};

class coding:public disha{
	public:
		void display() {
			cout << "C,C++,Java,Python" << endl;
		}
};

int main() {
	disha *d;
	coding c;
	d=&c;
	d->display();
}
