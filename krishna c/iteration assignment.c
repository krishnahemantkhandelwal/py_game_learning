#include <stdio.h>

int main() {
	int num;
	int i= 1;
	printf("enter a number:");
	scanf("%d",&num);
	while (i<=num) {
		printf("iteration %d\n",i);
		i++;
	}
}
