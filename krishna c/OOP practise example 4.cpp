#include <iostream>
using namespace std;

class mobile{
	public:
		string company;
		int price;
	void getdata() {
		cout << "enter company: ";
		cin >> company;
		cout << "enter price: ";
		cin >> price;
	}
	void display() {
		cout << "Company: " << company;
		cout << "price: " << price;
	}
	
};

int main() {
	mobile m;
	m.getdata();
	m.display();
}
