#include <stdio.h>

void checkEvenOdd(int num) {
	if (num%2==0) {
		printf("number is even");
	} 
	else {
		printf("number is odd");
	}
}

int main() {
	int num1;
	printf("enter a number=");
	scanf("%d",&num1);
	checkEvenOdd(num1);
}
