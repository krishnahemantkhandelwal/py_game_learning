#include <stdio.h>

int main() {
	int a= 5;
	int b= 10;
	int *ptra= &a;
	int *ptrb= &b;
	int ptrab= ((*ptra)*(*ptrb));
	printf("answer= %d",ptrab);
}
