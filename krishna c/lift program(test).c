#include <stdio.h>

int main() {
	int people;
	int i;
	printf("enter number of people:-");
	scanf("%d",&people);
	printf("enter wieght of each person:-");
	int wieghts[people];
	for(i=0;i<people;i++) {
		scanf("%d",&wieghts[i]);
	}
	int sum=0;
	for(i=0;i<people;i++) {
		sum+= wieghts[i];
	}
	if(people>4 || sum>110) {
		printf("lift cannot go");
	}
	else {
		printf("lift can go");
	}
}
