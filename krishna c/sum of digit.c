#include <stdio.h>

int main() {
	int digit;
	int num;
	int sum= 0;
	printf("enter a number:");
	scanf("%d",&num);
	while (num!=0) {
		digit= num%10;
		sum+= digit;
		num= num/10;
	} 
	printf("sum= %d",sum);
}
