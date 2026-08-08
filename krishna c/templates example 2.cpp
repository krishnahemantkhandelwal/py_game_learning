#include <iostream>
using namespace std;

template<class X, class Y> void fun(X a, Y b) {
	cout << "value of a: " << a << endl;
	cout << "value of b: " << b << endl;
}

int main() {
	fun(15, 12.3);
}
