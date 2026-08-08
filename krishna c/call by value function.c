#include <stdio.h>

void change(int num) {
	num+= 5;
	printf("function value of num is:- %d\n",num);
}

int main() {
	int num;
	printf("enter your num:-");
	scanf("%d",&num);
	printf("num before change:- %d\n",num);
	change(num);
	printf("num after change:- %d",num);
}
