#include <iostream>
using namespace std;

class Counter{
	int value
	public:
		Counter() {
			value= 0;
		}
		void operator++() {
			++value;
		}
		void display() {
			cout << "value: " <<< value << endl;
		}
};

int main() {
	Counter c;
	++c;
	c.display();
}
