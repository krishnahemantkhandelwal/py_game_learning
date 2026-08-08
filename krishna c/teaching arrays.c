#include <stdio.h> 

int main() {
	int i;
	int size;
	printf("enter array size:-");
	scanf("%d",&size);
	int array[size];
	printf("enter array elements:-");
	for(i=0;i<size;i++) {
		scanf("%d",&array[i]);
	}
	for(i=0;i<size;i++) {
		printf("%d ",array[i]);
	}
}
