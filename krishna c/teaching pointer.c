#include <stdio.h>

void change(int *x)  {
	*x+= *x;
	printf("inside function:- %d\n",*x);
}

int main() {
	int x= 5;
	printf("before change:- %d\n",x);
	change(&x);
	printf("outside function:- %d",x);
}
