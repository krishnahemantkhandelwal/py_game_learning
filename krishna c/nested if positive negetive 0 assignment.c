#include <stdio.h>

int main() {
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if (num!=0) {
		if (num>0) {
			printf("your number is positive");
		}
		else {
			printf("your number is negetive");
		}
	}
	else {
		printf("your number is zero");
	}
}
