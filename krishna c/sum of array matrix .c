#include <stdio.h>

int main() {
	int i,j;
	int sum= 0;
	int matrix[3][3];
	printf("enter matrix elements:\n");
	for(i=0;i<3;i++) {
		printf("enter %d row element",i+1);
		for (j=0;j<3;j++) {
			scanf("%d",&matrix[i][j]);	
		}
		printf("\n");
	}
	printf("sum= ");
	for (i=0;i<3;i++) {
		for (j=0;j<3;j++) {
			sum+= matrix[i][j];
		}
	}
	printf("%d",sum);
}
