#include <iostream>
using namespace std;

int main() {
	int i;
	int arr[5] = {12,45,2,67,34};
	int max = arr[0];
	for(i=0;i<5;i++) {
		if(arr[i]>max) {
			max = arr[i];
		}
	}
	cout << "max: " << max;
}
