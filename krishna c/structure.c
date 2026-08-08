#include <stdio.h>

struct info {
	char name[20];
	char division;
	char bloodGroup;
	char school[20];
	int age;
	int roll;
	int fees;
	float marks;
	float wieght;
};

int main() {
	struct info s1= {"Krishna","B","B","mount litera",12,23,20000,100.00f,40.00f};
	printf("name= %s\ndivision= %c\nblood group= %c\nschool= ",s1.name,s1.division,s1.bloodGroup);
	puts(s1.school);
	printf("age= %d\nroll number= %d\nfees= %d\nmarks= %.2f\n wieght= %.2f",s1.age,s1.roll,s1.fees,s1.marks,s1.wieght);
}
