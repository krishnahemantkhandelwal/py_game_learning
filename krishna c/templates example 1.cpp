#include <iostream>
using namespace std;

template<class T> T add(T &a,T &b) {
	T resuilt= a+b;
	return a+b;
}

int main() {
	int i= 2
	int j= 3
	int m= 2.3
	int n= 1.2
	cout << "addition of i and j is: " << add(i,j) << endl;
	cout << "addition for m and n is: " << add(m,n) << endl;
}
