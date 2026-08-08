#include <stdio.h>

union unio {
	int in;
	float floa;
	char string[20];
};

int main() {
	union unio data;
	data.in=  1;
	printf("%d\n",data.in);
	data.floa= 1.09;
	printf("%.2f\n",data.floa);
	printf("%d\n",data.in);
	data.string[20]= 'K';
	printf("%s\n",data.string);
}
