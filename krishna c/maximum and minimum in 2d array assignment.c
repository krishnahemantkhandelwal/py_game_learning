#include <stdio.h>

int main() {
	int i,j;
	int matrix[3][3];
	printf("enter elements of matrix:\n");
	for(i=0;i<3;i++) {
		printf("enter %d row elements",i+1);
		for (j=0;j<3;j++) {
			scanf("%d",&matrix[i][j]);	
		}
	}
	int max= matrix[0][0];
	int min= matrix[0][0];
	for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            if(matrix[i][j]>max) {
                max=matrix[i][j];
            }
            if(matrix[i][j]<min) {
                min=matrix[i][j];
            }
        }
    }
    printf("maximum element=%d\n", max);
    printf("minimum element=%d", min);
}
