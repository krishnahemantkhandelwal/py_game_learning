#include <stdio.h>

int main() {
	int i,j;
	int matrix[3][2]= {
		{1,2},
		{3,4},
		{6,7}
	};
	for (i=0;i<3;i++) {
		for (j=0;j<2;j++) {
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}
