#include <stdio.h>

int main() {
	char answer;
	printf("queston:- are u noob?\n");
	printf("a. yes\nb. no\nc. maybe\nd. idk\n");
	printf("enter your answer");
	scanf("%c",&answer);
	switch (answer) {
		case 'a':
			printf("correct answer");
			break;
		case 'b':
			printf("wrong answer, you are noob");
			break;
		case 'c':
			printf("wrong answer, you are noob");
			break;
		case 'd':
			printf("wrong answer, you are noob");
			break;
		default:
			printf("invalid answer, so noob");
			break;
	}
}
