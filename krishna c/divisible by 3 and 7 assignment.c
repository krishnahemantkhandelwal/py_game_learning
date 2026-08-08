#include <stdio.h>

int main() {
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if (num%3==0 && num%7==0) {
		printf("your number is divisible by 3 and 7");
	}
	else {
		printf("your number is not divisible 3 and 7");
	} 
}
