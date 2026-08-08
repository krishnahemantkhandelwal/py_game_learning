#include <stdio.h>
int main() {
	char name;
	int age;
	float percent;
	
	printf("enter your name:-");
	scanf("%c",&name);

	
	printf("enter your age and perent=");
	scanf("%d%f",&age,&percent);
	
	printf("name is= %c",name);
	printf("\n age is= %d \n perent is= %f",age,percent);
	return 0;
}
