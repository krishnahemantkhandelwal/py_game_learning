#include <stdio.h>

int main() {
	int num1,num2,choise;
	printf("CALCULATOR\n");
	printf("enter 2 numbers:-");
	scanf("%d%d",&num1,&num2);
	printf("Choose an operator:-\n1. +\n2. -\n3. *\n4. /\n");
	printf("enter your choise:-");
	scanf("%d",&choise);
	switch(choise) {
		case 1:
			printf("\nAns:- %d",num1+num2);
			break;
		case 2:
			printf("\nAns:- %d",num1-num2);
			break;
		case 3:
			printf("\nAns:- %d",num1*num2);
			break;
		case 4:
			printf("\nAns:- %d",num1/num2);
			break;
		default:
			printf("\n invalid choise");	
	}
}
