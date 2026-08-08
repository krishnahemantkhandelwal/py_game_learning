#include <stdio.h>

int main() {
	char studentName[20],schoolName[20];
	printf("enter your name:-");
	gets(studentName);
	printf("enter your school name:-");
	gets(schoolName);
	printf("your name is:-");
	puts(studentName);
	printf("your school name is:-");
	puts(schoolName);
}
