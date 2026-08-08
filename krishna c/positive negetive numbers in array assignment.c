#include <stdio.h>

int main() {
	int i;
	int size;
	printf("enter number of elements:");
	scanf("%d",&size);
	int array[size];
	printf("enter elements:");
	for (i=0;i<size;i++) {
		scanf("%d",&array[i]);
	}
	int positive=0;
	int negetive=0;
	for (i=0;i<size;i++) {
		if (array[i]>0) {
			positive++;
		}
	}
	for (i=0;i<size;i++) {
		if (array[i]<0) {
			negetive++;
		}
	}
	printf("positive numbers: %d\n",positive);
	printf("negetive numbers: %d",negetive);
}
