#include <stdio.h>

int main() {
	int i;
	int array1[5]= {1,2,3,4,5};
	int array2[5];
	for (i=0;i<5;i++) {
		array2[i]=array1[i];
	}
	printf("array1 elements:\n");
	for (i=0;i<5;i++) {
		printf("%d ",array1[i]);
	}
	printf("\n array2 elements:\n");
	for (i=0;i<5;i++) {
		printf("%d ",array2[i]);
	}
}
