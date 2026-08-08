#include <stdio.h>

int sum(int a,int b) {
	int c= a+b;
	return c;
}

int main() {
	int num1,num2;
	printf("enter two numbers:-");
	scanf("%d%d",&num1,&num2);
	int ans= sum(num1,num2);
	printf("ans= %d",ans);
}
