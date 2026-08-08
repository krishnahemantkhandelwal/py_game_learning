#include <stdio.h>

int main() {
	int size;
	int sum= 0;
	float average;
	printf("enter number of elements:");
	scanf("%d",&size);
	int array[size];
	int i;
	printf("enter elements:");
	for (i=0;i<size;i++) {
		scanf("%d",&array[i]);
		sum+= array[i];
	}
	average= sum/size;
    printf("average= %.2f",average);
}
