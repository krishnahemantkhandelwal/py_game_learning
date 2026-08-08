#include <stdio.h>

int main() {
	int num1;
	int num2;
	int num3;
	printf("enter num1, num2 and num3:");
	scanf("%d%d%d",&num1,&num2,&num3);
	if (num1>num2 && num1>num3) {
		printf("num1 is the greatest");
	}
	else if (num2>num1 && num2>num3) {
		printf("num2 is the greatest");
	}
	else if (num3>num1 && num3>num2) {
		printf("num3 is the greatest");
	}
	else {
		printf("some numbers are equal");
	}
}
