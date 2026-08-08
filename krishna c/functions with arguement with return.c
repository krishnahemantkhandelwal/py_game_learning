#include <stdio.h>
int add(int a, int b) {
	int c= a+b;
	return c;
}

int main() {
	int addition= add(10,3);
	printf("addition= %d",addition);
	int avg= addition/2;
	printf("avg= %d",avg);
}
