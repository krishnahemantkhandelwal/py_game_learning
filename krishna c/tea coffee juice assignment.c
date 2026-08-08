#include <stdio.h>

int main() {
	int choise;
	printf("1=tea 2=coffee 3=juice\n");
	printf("enter your choise:");
	scanf("%d",&choise);
	switch (choise) {
		case 1:
			printf("you chose tea");
			break;
		case 2:
			printf("you chose coffee");
			break;
		case 3:
			printf("you chose juice");
			break;
		default:
			printf("invalid choise");
	}
}
