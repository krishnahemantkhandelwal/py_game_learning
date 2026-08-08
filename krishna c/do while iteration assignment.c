#include <stdio.h>

int main() {
	int num;
	int i= 1;
	printf("enter a number:");
	scanf("%d",&num);
	do {
		printf("iteration %d\n");
		i++;
	}while(i<= 10);
}
