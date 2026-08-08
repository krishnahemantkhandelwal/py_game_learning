#include <stdio.h>

int main() {
    int size, i,j;
    printf("enter the number of elements:");
    scanf("%d", &size);
    int array[size];
    printf("enter array elements:");
    for(i=0; i<size;i++) {
        scanf("%d",&array[i]);
    }
    printf("even numbers in the array are:");
    for(j=0;j<size;j++) {
        if(array[j]%2==0) {
            printf("\n%d",array[j]);
        }
    }
}
