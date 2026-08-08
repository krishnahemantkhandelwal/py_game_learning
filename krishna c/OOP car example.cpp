#include <iostream>
using namespace std;

class car{
	public:
		string brand;
		int year;
	void display();/* {
		cout << "Brand: " << brand << endl;
		cout << "Year: " << year << endl;
	}*/
};

void car::display() {
	cout << "Brand: " << brand << endl;
	cout << "Year: " << year << endl;
}

int main() {
	car mycar;
	mycar.brand= "Toyota";
	mycar.year= 2022;
	mycar.display();
}
