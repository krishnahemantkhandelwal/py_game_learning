#include <stdio.h>

struct StudentInfo{
	char name[20];
	char school[20];
	int age;
};

int main() {
	struct StudentInfo s1;
	
	printf("enter name:-");
	scanf("%s",&s1.name);
	printf("enter school name:-");
	gets(s1.school);
	printf("enter your age:-");
	scanf("%d",&s1.age);
	
	printf("name= %s\nschool name= %s\nage= %d",s1.name,s1.school,s1.age);
}
