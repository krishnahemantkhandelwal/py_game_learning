#include <iostream>
using namespace std;

class Test{
	int num;
	public:
		Test() {
			num= 8;
		}
		void operator++() {
			num+=2;
		}
		void print() {
			cout << "the count is: " << num << endl;
		}
};

int main() {
	Test tt;
	++tt;
	tt.print();
}
