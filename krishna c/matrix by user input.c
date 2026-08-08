#include <stdio.h>

int main() {
	int i,j;
	int matrix[3][2];
	printf("enter elements of matrix:\n");
	for(i=0;i<3;i++) {
		printf("enter %d row element",i+1);
		for (j=0;j<2;j++) {
			scanf("%d",&matrix[i][j]);	
		}
		printf("\n");
	}
	printf("array elements are:\n");
	for (i=0;i<3;i++) {
		for (j=0;j<2;j++) {
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}
