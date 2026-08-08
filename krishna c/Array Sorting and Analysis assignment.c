#include <stdio.h>

int isPrime(int num) {
    int i;
    if (num<=1) {
        return 0;
	}
    for (i=2;i<=num/2;i++) {
        if (num%i==0)
            return 0;
    }
    return 1;
}

int main() {
	int size;
	printf("enter the size of array:");
	scanf("%d",&size);
	int array[size];
	printf("enter array elements:");
	int i,j,a;
	for(i=0;i<size;i++) {
		scanf("%d",&array[i]);
	}
	for(i=0;i<size-1;i++) {
        for(j=0;j<size-i-1;j++) {
            if(array[j]>array[j+1]) {
                a=array[j];
                array[j]=array[j+1];
                array[j+1]=a;
            }
        }
    }
    printf("array is ascending order:\n");
    for(i=0;i<size;i++) {
        printf("%d ",array[i]);
    }
    printf("\n");
    int seclarge= array[size-2];
    printf("second largest number: %d\n",seclarge);
    int count=0;
    for (i=0;i<size;i++) {
        if (isPrime(array[i])) {
            count++;
        }
    }
    printf("number of prime numbers in the array= %d",count);

}
