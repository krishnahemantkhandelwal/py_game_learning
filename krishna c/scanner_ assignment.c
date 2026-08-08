#include <stdio.h>

int main() {
	char name,school,blood_group,division;
	int age,rollNo,fees;
	float mark,weight;
	
//input from user of charecter data
	printf("enter your name,school,blood group,division:-");
	scanf("%c%c%c%c",&name,&school,&blood_group,&division);
	
	// input from user of int data
	printf("enter your age,roll no,fees:-");
	scanf("%d%d%d",&age,&rollNo,&fees);

	
	printf("enter your marks,weight:-");
	scanf("%f%f",&mark,&weight);
	
	printf("\n your name is %c \n school- %c \n blood group- %c \n division- %c",name,school,blood_group,division);
	printf("\n age- %d \n roll no- %d \n fees- %d",age,rollNo,fees);
	printf("\n marks- %.2f \n wieght- %.2f",mark,weight);
	return 0;	
}
