#include <iostream>
using namespace std;

class Food{
	public:
		virtual void order() {
			cout << "Food ordered..." << endl;
		}
};

class Pizza:public Food{
	public:
		void order() {
			cout << "Pizza ordered successfully" << endl;
		}
};

int main() {
	Food *f;
	Pizza p;
	f=&p;
	f->order();
}
