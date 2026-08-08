#include <iostream>
using namespace std;

class rectangle{
	public:
		int length, width;
		void input() {
			cout << "enter length: ";
			cin >> length;
			cout << "Enter width: ";
			cin >> width;
		}
		void area() {
			cout << "Area= " << legnth*width;
		}
};

int main() {
	rectangle r;
	r.input();
	r.area();
}
