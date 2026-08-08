#include <stdio.h>

void change(int *p) {
	*p+=5;
	printf("\n in function value is:- %d\n",*p);
}

int main() {
	int a= 10;
	int *p= &a;
	printf("value before change:- %d",*p);
	change(p);
	printf("value after change:- %d",*p);
}
