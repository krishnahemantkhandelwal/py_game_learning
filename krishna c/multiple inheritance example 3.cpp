#include <iostream>
using namespace std;

class value1{
	public:
		int a= 10;
		int b= 20;
};

class value2{
	public:
		int c= 30;
		int d= 40;
};

class value3{
	public:
		int e= 50;
		int f= 60;
		int g= 70;
};

class value4:public value1,public value2,public value3{
	public:
		void sum() {
			int resuilt= a+b+c+d+e+f+g;
			cout << "sum: " << resuilt << endl;
		}
};

int main() {
	value4 v;
	v.sum();
}
