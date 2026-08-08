#include <stdio.h>

int main() {
	int num1;
	int num2;
	
	printf("enter first number and second number:-");
	scanf("%d%d",&num1,&num2);
	
	int sum= num1 + num2;
	
	int sub = num1 - num2;
	
	int product= num1 * num2;
	
	int quotient= num1 / num2;
	
	printf("sum = %d",sum);
	printf("\n subtraction= %d",sub);
	printf("\n muliplication= %d",product);
	printf("\n division= %d",quotient);
	return 0;
}
