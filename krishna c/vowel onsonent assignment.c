#include <stdio.h>

int main() {
	char letter;
	printf("enter a letter:");
	scanf("%c",&letter);
	if (letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u') {
		printf("your letter is a vowel");
	}
	else if (letter=='A' || letter=='E' || letter=='I' || letter=='O' || letter=='U') {
		printf("your letter is a vowel");
	}
	else {
		printf("your letter is a consonent");
	}
}
