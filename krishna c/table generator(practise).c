#include <stdio.h>

int main() {
	int num,i,mul=0,till;
	printf("TABLE GENERATOR\n");
	printf("enter a number:-");
	scanf("%d",&num);
	printf("till how much:-");
	scanf("%d",&till);
	for(i=1;i<=till;i++) {
		mul+=num;
		printf("%d x %d = %d\n",num,i,mul);
	}
}
