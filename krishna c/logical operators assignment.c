#include <stdio.h>

int main() {
	int num1;
	int num2;
	
	printf("enter two 4-digit numbers:-");
	scanf("%d%d",&num1,&num2);
	
	printf("num1>5 && num2<10: %d\n",num1>5 && num2<10);
	printf("num1>5 || num2<10: %d\n",num1>5 || num2<10);
	printf("!num1==num2: %d\n",!num1==num2);
}
