#include <stdio.h>

void bonus(int day,int totalSalary) {
	if(day>=25) {
		totalSalary+=5000;
		printf("total salary after bonus:- %d\n",totalSalary);
	}
	else {
		printf("no bonus\n");
	}
}

int main() {
	int day= 25;
	int salaryPerDay= 500;
	int totalSalary= day*salaryPerDay;
	printf("total salary:- %d\n",totalSalary);
	bonus(day,totalSalary);
}
