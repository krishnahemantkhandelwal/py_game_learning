#include <iostream>
using namespace std;

class grandfather{
	public:
	void print1() {
		cout << "this is process of grandfather class" << endl;
	}
};

class father:public grandfather{
	public:
	void print2() {
		cout << "this is process of father class" << endl;
	}
};

class son:public father{
	public:
	void print3() {
		cout << "this is process of son class" << endl;
	}
};

int main() {
	son s1;
	s1.print1();
	s1.print2();
	s1.print3();
}
