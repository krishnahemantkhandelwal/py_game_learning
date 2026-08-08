#include <stdio.h>

struct record {
	char name[20];
	int age;
	float marks;
};	

int main() {
	struct record s1= {"pratham", -1, -10000000};
	struct record s2= {"krishna", 13, 1000.00};
	printf("%s\n%d\n%.2f",s1.name,s1.age,s1.marks);
	printf("\n%s\n%d\n%.2f",s2.name,s2.age,s2.marks);
}
