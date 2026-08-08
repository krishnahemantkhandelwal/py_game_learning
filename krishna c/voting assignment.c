#include <stdio.h>

int main() {
	int age;
	printf("enter your age:");
	scanf("%d",&age);
	if (age>18 && age<=100) {
		printf("you are eligible for vote");
	}
	else {
		printf("you are not eligible to vote");
	}
}
