#include <stdio.h>

int main() {
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if (num>0) {
		if (num%2==0) {
			printf("your number is even");
		}
		else {
			printf("your number is odd");
		}
	}
	else {
		printf("your number is not valid");
	}
}
