#include <iostream>
using namespace std;

class car{
	public:
		string brand;
		sting model;
	void input() {
		cout << "Enter brand: ";
		cin >> brand;
		cout << "Enter model: ";
		cin >> model;
	}
	void display() {
		cout << "Brand: " << brand;
		cout << "model: " << model;
	}
};

int main() {
	car c;
	c.input();
	c.display();
}
