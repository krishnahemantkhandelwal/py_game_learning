#include <stdio.h>

int areasq(int s) {
	int ans= s*s;
	return ans;
}

int main() {
	int side;
	printf("enter length of side:-");
	scanf("%d",&side);
	float answer= areasq(side);
	printf("area of square is %.2f",answer);
}
