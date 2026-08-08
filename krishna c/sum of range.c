#include <stdio.h>

int main() {
	int i,j,sum;
	printf("enter a range:");
	scanf("%d%d",&i,&j);
	while (i<=j) {
		sum+=i;
		i++;
	}
	printf("sum= %d",sum);
}
