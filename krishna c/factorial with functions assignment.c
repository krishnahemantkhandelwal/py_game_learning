#include <stdio.h>

int factorial(int num) {
	int i;
	int fact= 1;
	for(i=num;i>=1;i--) {
		fact= fact*i;
	}
	return fact;
}

int main() {
	int userNum;
	printf("enter a number:-");
	scanf("%d",&userNum);
	int answer= factorial(userNum);
	printf("factorial= %d",answer);
}
