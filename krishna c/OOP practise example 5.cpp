#include <iostream>
using namespace std;

class circle{
	public:
		float radius;
	void input() {
		cout << "Enter radius: ";
		cin >> radius;
	}
	void area() {
		cout << "Area: " << 3.14*radius*radius;
	}
};

int main() {
	circle c;
	c.input();
	c.area();
}
