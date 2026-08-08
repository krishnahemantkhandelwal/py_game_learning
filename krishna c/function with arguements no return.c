#include <stdio.h>
//with arguement no return
void add(int a, int b) {
	int c= a+b;
	printf("addition= %d\n",c);
}

int main() {
	int num1, num2;
	printf("enter 2 numbers:-");
	scanf("%d%d",&num1,&num2);
	add(num1,num2);
}
