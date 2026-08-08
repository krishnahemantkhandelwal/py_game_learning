#include <iostream>
using namespace std;

int main() {
	int i;
	int arr[5];
	cout << "enter 5 numbers: " << endl;
	for(i=0;i<5;i++) {
		cin >> arr[i];
	}
	cout << "you entered:\n";
	for(i=0;i<5;i++) {
		cout << arr[i] << " ";
	}
}
