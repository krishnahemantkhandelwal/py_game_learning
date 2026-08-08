#include <stdio.h>

int main() {
	int num1;
	int num2;
	
	printf("enter two 4-digit numbers:-");
	scanf("%d%d",&num1,&num2);
	
	printf("num1>999 && num2<9999: %d\n",num1>999 && num2<9999);
	printf("num1>999 || num2<1000: %d\n",num1>999 || num2<2000);
	printf("!num1==num2: %d\n",!num1==num2);
}
