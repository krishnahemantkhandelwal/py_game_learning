#include <stdio.h>

float areacir(int r) {
	int ans= 3.14*r*r;
	return ans;
}

int main() {
	int radius;
	printf("enter radius of the circle:-");
	scanf("%d",&radius);
	float answer= areacir(radius);
	printf("area of circle is %.2f",answer);
}
