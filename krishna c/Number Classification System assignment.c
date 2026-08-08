#include <stdio.h>

int main() {
	int i,size;
	printf("enter size of array:-");
	scanf("%d",&size);
	int array[size];
	printf("enter array elements:-");
	for(i=0;i<size;i++) {
		scanf("%d",&array[i]);
	}
	int odd=0,even=0,positive=0,negetive=0;
	for(i=0;i<size;i++) {
		if(array[i]%2==1) {
			odd++;
		}
	}
	printf("number of odd numbers:- %d\n",odd);
	for(i=0;i<size;i++) {
		if(array[i]%2==0) {
			even++;
		}
	}
	printf("number of even numbers:- %d\n",even);
	for(i=0;i<size;i++) {
		if(array[i]>0) {
			positive++;
		}
	}
	printf("number of positive numbers:- %d\n",positive);
	for(i=0;i<size;i++) {
		if(array[i]<0) {
			negetive++;
		}
	}
	printf("number of negetive numbers:- %d\n",negetive);
	int largest= array[0];
	int smallest= array[0];
	for(i=0;i<size;i++) {
		if(array[i]>largest) {
			largest= array[i];
		}
	}
	printf("largest number:- %d\n",largest);
	for(i=0;i<size;i++) {
		if(array[i]<smallest) {
			smallest= array[i];
		}
	}
	printf("smallest number:- %d\n",smallest);
	int sum=0;
	for(i=0;i<size;i++) {
		sum+= array[i];
	}
	float average= sum/size;
	printf("average = %.2f\n",average);
	printf("numbers above average:-\n");
	for(i=0;i<size;i++) {
		if(array[i]>average) {
			printf("%d\n",array[i]);
		}
	}
}
