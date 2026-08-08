#include <stdio.h>

int main() {
    int size,i;
    printf("enter the number of elements:");
    scanf("%d", &size);
    int array[size];
    printf("enter array elements:");
    for(i=0;i<size;i++) {
        scanf("%d",&array[i]);
    }
    printf("even numbers in the array are:");
    for(i=0;i<size;i++) {
        if(array[i]%2==0) {
            printf("\n%d",array[i]);
        }
    }
    printf("\n odd numbers in the array are:");
    for(i=0;i<size;i++) {
        if(array[i]%2==1) {
            printf("\n%d",array[i]);
        }
    }
}
