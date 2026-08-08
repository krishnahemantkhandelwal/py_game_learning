#include <iostream>
using namespace std;

class base{
	public:
		virtual void show()=0;
};

class derived:public base{
	public:
		void show() {
			cout << "derived class is derived from the base class" << endl;
		}
};

int main() {
	base *bptr;
	derived d;
	bptr=&d;
	bptr->show();
}
