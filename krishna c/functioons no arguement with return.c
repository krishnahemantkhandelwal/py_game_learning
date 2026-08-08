#include <stdio.h>
//no arguement with return
int add() {
	int a=7,b=3;
	int c= a+b;
	return c;
}

int main() {
	int num= add();
	printf("sum= %d",num);
}
