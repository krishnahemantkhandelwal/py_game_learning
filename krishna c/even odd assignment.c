#include <stdio.h>

int main() {
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if (num%2==0) {
		printf("your number is even");
	}
	else {
		printf("your num is odd");
	}
}
