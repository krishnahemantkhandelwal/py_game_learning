#include <iostream>
using namespace std;

class product{
	public:
		int id;
		string name;
		float price;
	void input() {
		cout << "enter product id: ";
		cin >>  id;
		cout << "enter name: ";
		cin >>  name;
		cout << "enter price: ";
		cin >>  price;
	}
	void display() {
		cout << "Product id: " << id << endl;
		cout << "name: " << name << endl;
		cout << "Price: " << price << endl;
	}
};

int main() {
	product p;
	p.input();
	p.display();
}
