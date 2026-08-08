#include <iostream>
using namespace std;

class mobile{
	public:
		string company;
		int ram;
		float price;
		mobile(string c, int r, float p) {
			company= c;
			ram= r;
			price= p;
		}
	void display() {
		cout << "company: " << company << endl;
		cout << "ram: " << ram << " GB" << endl;
		cout << "price: " << price << endl;
	}
};

int main() {
	mobile m1("samsung", 8, 2500000);
	m1.display();
}
