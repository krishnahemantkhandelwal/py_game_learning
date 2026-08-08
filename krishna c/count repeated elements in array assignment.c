#include <stdio.h>

int main() {
	int size;
	int i;
	printf("enter number of elements:");
	scanf("%d",&size);
	int array[size];
	printf("enter elements:");
	for (i=0;i<size;i++) {
		scanf("%d",&array[i]);
	}
	int count = 0;
	int j;
    for(i=0;i<size;i++) {
        for(j=i+1;j<size;j++) {
            if(array[i]==array[j]) {
                count++;
            }
        }
    }
    printf("number of repeated elements: %d",count);
}
