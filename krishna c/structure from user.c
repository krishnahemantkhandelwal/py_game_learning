#include <stdio.h>

struct StudentInfo{
	char name[20];
	char school[20];
	int age;
};

int main() {
	struct StudentInfo st1;
	
	printf("enter name:-");
	scanf("%s",&st1.name);
	printf("enter school name:-");
	gets(st1.school);
	printf("enter your age:-");
	scanf("%d",&st1.age);
	
	printf("name= %s\nschool name= %s\nage= %d",st1.name,st1.school,st1.age);
}
