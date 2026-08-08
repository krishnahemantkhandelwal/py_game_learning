#include <stdio.h>

int main() {
	int num1;
	int num2;
	
	printf("enter first number and second number:-");
	scanf("%d%d",&num1,&num2);
	
	int sum= num1 + num2;
	printf("sum = %d",sum);
	
	int sub = num1 - num2;
	printf("subtraction= %d",sub);
	
	int product= num1 * num2;
	printf("muliplication= %d",product);
	
//	int quotient= num1 / num2;
//	printf("division= %d",quotient);
	return 0;
}
