#include <iostream>
using namespace std;

class Doctor{
	public:
		virtual void treatment() {
			cout << "general treatment" << endl;
		}
};

class Dentist:public Doctor{
	public:
		void treatment() {
			cout << "dentist treatment" << endl;
		}
};

int main() {
	Doctor *d;
	Dentist obj;
	d=&obj;
	d->treatment();
}
