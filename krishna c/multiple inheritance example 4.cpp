#include <iostream>
using namespace std;

class Sum{
	public:
		int a= 10;
		int b= 20;
		void sum() {
			cout << "sum: " << a+b << endl;
		}
};

class Mul{
	public:
		int c= 30;
		int d= 40;
		void mul() {
			cout << "product: " << c*d << endl;
		}
};

class Div{
	public:
		int e= 50;
		int f= 60;
		void div() {
			cout << "quotient: " << f/e << endl;
		}
};

class Mod{
	public:
		int g= 70;
		int h= 20;
		void mod() {
			cout << "remainder: " << g%h << endl;
		}
};

class Sub:public Sum,public Mul,public Div,public Mod{
	public:
		int i= 80;
		int j= 90;
		void sub() {
			sum();
			mul();
			div();
			mod();
			cout << ""
		}
};
