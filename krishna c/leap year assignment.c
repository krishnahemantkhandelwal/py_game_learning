#include <stdio.h>

int main() {
	int year;
	printf("enter a year:");
	scanf("%d",&year);
	if (year%4==0) {
		printf("year is a leap year");
	}
	else {
		printf("your year is a regular year");
	}
}
