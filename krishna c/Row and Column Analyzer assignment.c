#include <stdio.h>

int main() {
	int i,j,matrix[3][3];
	printf("enter a 3x3 matrix:-\n");
	printf("enter row 1 elements:-");
	for(i=0;i<3;i++) {
		scanf("%d",&matrix[0][i]);
	}
	printf("enter row 2 elements:-");
	for(i=0;i<3;i++) {
		scanf("%d",&matrix[1][i]);
	}
	printf("enter row 3 elements:-");
	for(i=0;i<3;i++) {
		scanf("%d",&matrix[2][i]);
	}
	
	printf("your matrix:-\n");
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	int column1= matrix[0][0] + matrix[1][0] + matrix[2][0];
	int column2= matrix[0][1] + matrix[1][1] + matrix[2][1];
	int column3= matrix[0][2] + matrix[1][2] + matrix[2][2];
	int row1= matrix[0][0] + matrix[0][1] + matrix[0][2];
	int row2= matrix[1][0] + matrix[1][1] + matrix[1][2];
	int row3= matrix[2][0] + matrix[2][1] + matrix[2][2];
	printf("sum of column 1= %d\n",column1);
	printf("sum of column 2= %d\n",column2);
	printf("sum of column 3= %d\n",column3);
	printf("sum of row 1= %d\n",row1);
	printf("sum of row 2= %d\n",row2);
	printf("sum of row 3= %d\n",row3);
	if (column1>column2 && column1>column3) {
		printf("largest column= column 1 (%d)\n",column1);
	}
	else if (column2>column1 && column2>column3) {
		printf("largest column= column 2 (%d)\n",column2);
	}
	else if (column3>column1 && column3>column2) {
		printf("largest column= column 3 (%d)\n",column3);
	}
	if (row1>row2 && row1>row2) {
		printf("largest row= row 1(%d)\n",row1);
	}
	else if (row2>row1 && row2>row3) {
		printf("largest row= row 2(%d)\n",row2);
	}
	else if (row3>row1 && row3>row2) {
		printf("largest row= row 3(%d)\n",row3);
	}
}
