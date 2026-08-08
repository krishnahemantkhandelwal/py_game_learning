#include <stdio.h>

int main() {
	int size;
	printf("enter the size of elements:");
	scanf("%d",&size);
	
	int marks[size];
	int i,j;
	printf("enter loop elements:");
// this loop is for taking input for user	
	for (i=0;i<size;i++) {
		scanf("%d",&marks[i]);
	}
	printf("these are array elments:\n");
	for (j=0;j<size;j++) {
		printf("%d ",marks[j]);
	}
}
