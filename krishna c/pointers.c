#include <stdio.h>

int main() {
	int age= 12;
	int *ptr= &age;
	printf("value= %d\n",age);
	printf("adddress of age= %p\n",&age);
	printf("value of  pointer= %p\n",ptr);
	printf("pointer via value= %d",*ptr);
}
