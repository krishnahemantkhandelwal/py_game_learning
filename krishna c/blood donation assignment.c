#include <stdio.h>

int main() {
	int age;
	printf("enter your age:");
	scanf("%d",&age);
	if (age>=18 && age<=65) {
		printf("you can blood donate");
	}
	else {
		printf("you cannot blood donate");
	}
}
