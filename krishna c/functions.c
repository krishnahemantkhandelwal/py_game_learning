#include <stdio.h>

int add() {
	int a,b,c;
	printf("\n enter the value of a & b:");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("addition is:- %d",c);
}

int main() {
	add();
	printf("\n ending");
}
