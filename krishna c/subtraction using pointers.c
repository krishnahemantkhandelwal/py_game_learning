#include <stdio.h>

int main() {
	int a= 10;
	int b= 5;
	int *ptra= &a;
	int *ptrb= &b;
	int ptrab= ((*ptra)-(*ptrb));
	printf("answer= %d",ptrab);
}
