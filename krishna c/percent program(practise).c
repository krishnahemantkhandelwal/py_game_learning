#include <stdio.h>

int main() {
	int big,small;
	printf("enter the smaller and the bigger numbers:-");
	scanf("%d%d",&small,&big);
	float percent= (small/big) * 100;
	printf("the smaller number is %.2f of the bigger number",percent);
}
