#include <stdio.h>

int main() {
	int  employees;
	int i;
	printf("enter number of employees:-");
	scanf("%d",&employees);
	int salaries[employees];
	printf("enter salaries:-");
	for(i=0;i<employees;i++) {
		scanf("%d",&salaries[i]);
	}
	int maximum= salaries[0];
	int minimum= salaries[0];
	for(i=0;i<employees;i++) {
		if(salaries[i]>maximum) {
			maximum=salaries[i];
		}
	}
	printf("maximum= %d\n",maximum);
	for(i=0;i<employees;i++) {
		if(salaries[i]<minimum) {
			minimum= salaries[i];
		}
	}
	printf("minimum= %d\n",minimum);
	int sum=0;
	for(i=0;i<employees;i++) {
		sum+=salaries[i];
	}
	int average= sum/employees;
	printf("average of salaries:- %d\n",average);
	printf("employees earning above average:-\n ");
	for(i=0;i<employees;i++) {
		if(salaries[i]>average) {
			printf("employee number %d, ",i+1);
		}
	}
	printf("\n");
	printf("grade A employees(25000+):-\n ");
	for(i=0;i<employees;i++) {
		if(salaries[i]>=25000) {
			printf("employee number %d, ",i+1);
		}
	}
	printf("\n");
	printf("grade B employees(15000-25000):-\n ");
	for(i=0;i<employees;i++) {
		if(salaries[i]<25000 && salaries[i]>=15000) {
			printf("employee number %d, ",i+1);
		}
	}
	printf("\n");
	printf("grade C employees(15000-):-\n ");
	for(i=0;i<employees;i++) {
		if(salaries[i]<15000) {
			printf("employee number %d, ",i+1);
		}
	}
}
