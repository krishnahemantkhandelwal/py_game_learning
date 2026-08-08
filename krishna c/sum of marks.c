#include <stdio.h>

int main() {
	int marks[10]= {36,45,35,76,46,55,12,90,19,99};
	int i,j;
	int sum= 0;
	for (i= 0;i<11;i++) {
		sum+= marks[i];
	}
	for (j=0;j<11;j++) {
		printf("%d ",marks[j]);
	}
	printf("\n sum of all marks: %d",sum);
}

