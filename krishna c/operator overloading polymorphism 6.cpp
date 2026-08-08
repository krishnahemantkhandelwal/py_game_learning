#include<iostream>
using namespace std;
class Mobile{
	int price;
	public:
	void getData() {
		cout<<"Enter Mobile Price: ";
		cin>>price;
	}
	void operator >(Mobile m) {
		if(price > m.price) {
			cout<<"First Mobile is Costlier";
		} else {
			cout<<"Second Mobile is Costlier";
		}
	}
};

int main() {
	Mobile m1,m2;
	m1.getData();
	m2.getData();
	m1 > m2;
}
