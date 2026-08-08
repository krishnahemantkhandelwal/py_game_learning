#include <stdio.h>

int main() {
    int size,i,elementToFind,found= 0;
    printf("enter the number of elements:");
    scanf("%d",&size);
    int array[size];
    printf("enter elements:");
    for(i=0;i<size;i++) {
        scanf("%d",&array[i]);
    } 
    printf("enter the element to search:");
    scanf("%d", &elementToFind);
    for(i=0;i<size;i++) {
        if(array[i]==elementToFind) {
            found=1;
            printf("element found at position %d",i+1);
        }
    }
    if(found==0) {
        printf("element not found in the array");
    }
}

