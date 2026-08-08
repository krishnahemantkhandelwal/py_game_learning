#include <stdio.h>

int main() {
	int a= 2;
	int *ptr= &a;
	int ptrcb= ((*ptr)*(*ptr)*(*ptr));
	printf("answer= %d",ptrcb);
}
