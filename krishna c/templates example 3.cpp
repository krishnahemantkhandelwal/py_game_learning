#include <iostream>
using namespace std;

template<class X> void fun(X a) {
	cout << "value of a is " << a << endl;
}

template<class X, class Y> void fun(X b, Y c) {
	cout << "Value of b is " << endl;
	cout << "value of c is " << endl;
}

int main() {
	fun(10);
	fun(20, 30.5)
}
