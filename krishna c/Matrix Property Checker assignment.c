#include <stdio.h>

int main() {
	int matrix[4][4];
	int i,j;
	printf("enter a 4x4 matrix:-\n");
	printf("enter row 1 elements:-");
	for(i=0;i<4;i++) {
		scanf("%d",&matrix[0][i]);
	}
	printf("enter row 2 elements:-");
	for(i=0;i<4;i++) {
		scanf("%d",&matrix[1][i]);
	}
	printf("enter row 3 elements:-");
	for(i=0;i<4;i++) {
		scanf("%d",&matrix[2][i]);
	}
	printf("enter row 4 elements:-");
	for(i=0;i<4;i++) {
		scanf("%d",&matrix[3][i]);
	}
	printf("your matrix:-\n");
	for(i=0;i<4;i++) {
		for(j=0;j<4;j++) {
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	int sumMainDiagonal=matrix[0][0]+matrix[1][1]+matrix[2][2]+matrix[3][3];
	printf("sum of main diagonal= %d\n",sumMainDiagonal);
	int sumSecondaryDiagonal= matrix[0][3]+matrix[1][2]+matrix[2][1]+matrix[3][0];
	printf("sum of secondary diagonal= %d\n",sumSecondaryDiagonal);
	int symmetricPoint=0;
	for(i=0;i<4;i++) {
		if(matrix[i][1]==matrix[i][2]) {
			symmetricPoint++;
		}
	}
	for(i=0;i<4;i++) {
		if(matrix[i][0]==matrix[i][3]) {
			symmetricPoint++;
		}
	}
	if(symmetricPoint==8) {
		printf("matrix is symmetric\n");
	}
	else {
		printf("matrix is not symmetric\n");
	}
}
