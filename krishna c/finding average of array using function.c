#include <stdio.h>

float average(int array[],int size) {
	int sum= 0,i;
	for (i=0;i<=size;i++) {
		sum= sum+array[i];
	}
	float aver=sum/size;
	return aver;
}

int main() {
	int arr[10]= {5,10,15,20,25,30,35,40,45};
	float answer= average(arr,10);
	printf("average= %.2f",answer);
}
