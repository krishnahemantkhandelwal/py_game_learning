#include<iostream>
using namespace std;
class Bill {
	int amount;
	public:
		void getData() {
		cout<<"Enter Bill Amount: ";
		cin>>amount;
	}
	Bill operator +(Bill b) {
		Bill temp;
		temp.amount = amount + b.amount;
		return temp;
	}
	void display() {
		cout<<"Total Bill = "<<amount;
	}
};

int main() {
	Bill b1,b2,b3;
	b1.getData();
	b2.getData();
	b3 = b1 + b2;
	b3.display();
}
