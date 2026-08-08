#include <stdio.h>

int main() {
	int marks[3][3];
	int i,j;
	printf("enter marks of roll number 1:-");
	for(i=0;i<3;i++) {
		scanf("%d",&marks[1][i]);
	}
	printf("enter marks of roll number 2:-");
	for(i=0;i<3;i++) {
		scanf("%d",&marks[2][i]);
	}
	printf("enter marks of roll number 3:-");
	for(i=0;i<3;i++) {
		scanf("%d",&marks[3][i]);
	}
	int sumroll1=0,sumroll2=0,sumroll3=0;
	for(i=0;i<3;i++) {
		sumroll1+=marks[1][i];
	}
	for(i=0;i<3;i++) {
		sumroll2+=marks[2][i];
	}
	for(i=0;i<3;i++) {
		sumroll3+=marks[3][i];
	}
	int roll1= sumroll1/3;
	int roll2= sumroll2/3;
	int roll3= sumroll3/3;
	if(roll1>roll2 && roll1>roll3) {
		printf("topper= roll1\n");
	}
	else if(roll2>roll1 && roll2>roll3) {
		printf("topper= roll2\n");
	}
	else {
		printf("topper= roll3\n");
	}
	for (i=0;i>3;i++) {
		for (j=0;j>3;j++) {
			if(marks[i][j]<=40) {
				if(i=0) {
					printf("atleast failed in 1 subject= roll1\n");
				}
				else if(i=1) {
					printf("atleast failed in 1 subject= rolll2\n");
				}
				else {
					printf("atleast failed in 1 subject= roll3\n");
				}
			}
		}
	}
}
