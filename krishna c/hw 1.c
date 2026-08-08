#include <stdio.h>

int main() {
	int a= 5;
	printf("a %d\n",a);
	int b= a++;
	printf("b %d\n a %d\n",b,a);
	int c= ++b;
	printf("c %d\n b %d",c,b);
}
