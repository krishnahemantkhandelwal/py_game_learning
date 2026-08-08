#include <iostream>
using namespace std;

class person{
	public:
		void speaking() {
			cout << "speaking..." << endl;
		}
		void walking() {
			cout << "walking..." << endl;
		}
		void eat() {
			cout << "eating..." << endl;
		}
};

class teacher:public person{
	public:
		void teaching() {
			cout << "teaching..." << endl;
		}
};

int main() {
	teacher t1;
	t1.eat();
	t1.walking();
	t1.speaking();
	t1.teaching();
}
