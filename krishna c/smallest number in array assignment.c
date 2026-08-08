#include <stdio.h>

int main() {
    int size,i;
    printf("enter the number of elements:");
    scanf("%d",&size);
    int array[size];
    printf("enter elements:");
    for(i=0;i<size;i++) {
        scanf("%d",&array[i]);
    }
    int smallest = array[0];
    for(i=1;i<size;i++) {
        if(array[i]<smallest) {
            smallest=array[i];
        }
	}
    printf("smallest element in the array is: %d",smallest);
}
