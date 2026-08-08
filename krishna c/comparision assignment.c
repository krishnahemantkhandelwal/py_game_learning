#include <stdio.h>

int main() {
	int num1;
	int num2;
	printf("enter num1 and num2:");
	scanf("%d%d",&num1,&num2);
	if (num1>num2) {
		printf("num1 is greater and num2 is smaller");
	}
	else {
		printf("num2 is greater and num1 is smaller");
	}
}
