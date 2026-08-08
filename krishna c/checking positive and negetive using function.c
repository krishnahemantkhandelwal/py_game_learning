#include <stdio.h>

void checkPositiveNegetive(int num) {
	if (num>0) {
		printf("your number is positive");
	}
	else if (num<0) {
		printf("your number is negetive");
	}
	else {
		printf("your number is 0");
	}
}

int main() {
	int userNum;
	printf("enter a number:- ");
	scanf("%d",&userNum);
	checkPositiveNegetive(userNum);
}
