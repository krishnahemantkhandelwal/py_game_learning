#include <iostream>
using namespace std;

class vehicle{
	public:
		string brand;
	void getvehicle() {
		cout << "enter brand: " << endl;
		cin >> brand;
	}
};

class car:public vehicle{
	public:
		string model;
	void getcar() {
		cout << "Enter model; ";
		cin >> model;
	}
};

class sportscar:public car{
	public:
		int price;
	void getsportscar() {
		cout << "enter price: ";
		cin >> price;
	}
	void display() {
		cout << "Model: " << model << endl;
		cout << "brand: " << brand << endl;
		cout << "price: " << price << endl;
	}
};

int main() {
	sportscar sc1;
	sc1.getvehicle();
	sc1.getcar();
	sc1.getsportscar();
	sc1.display();
}
