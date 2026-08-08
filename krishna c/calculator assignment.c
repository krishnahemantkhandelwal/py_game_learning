#include <stdio.h>

int main() {
	char sign;
	int num1;
	int num2;
	int ans;
	printf("enter an operator(+,-,*,/):");
	scanf("%c",&sign);
	printf("enter num1 and num2:");
	scanf("%d%d",&num1,&num2);
	switch (sign) {
		case '+':
			ans= num1+num2;
			printf("%d+%d=%d",num1,num2,ans);
			break;
		case '-':
			ans= num1-num2;
			printf("%d-%d= %d",num1,num2,ans);
			break;
		case '*':
			ans= num1*num2;
			printf("%d*%d= %d",num1,num2,ans);
			break;
		case '/':
			ans= num1/num2;
			printf("%d/%d= %d",num1,num2,ans);
			break;
		default:
			printf("your sign is unvalid");
	}
}
