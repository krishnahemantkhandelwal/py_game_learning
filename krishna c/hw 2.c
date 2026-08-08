#include <stdio.h>

int main() {
	int a= 25;
	printf("a %d\n",a);
	int b= ++a;
	printf("b %d\n a %d\n",b,a);
	int c= a++;
	printf("c %d\n a %d\n",c,a);
}
