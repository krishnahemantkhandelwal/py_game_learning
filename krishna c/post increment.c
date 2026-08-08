#include <stdio.h>

int main() {
	int a= 10;
	printf("a %d\n",a);
	int b= a++;
	printf("b %d\n",b);
	printf("a %d\n",a);
}
