#include <stdio.h>

int main() {
	int a= 5;
	int *ptr= &a;
	int ptrsq= ((*ptr)*(*ptr));
	printf("square= %d",ptrsq);
}
