#include <stdio.h>
#include <string.h>

int main() {
	char str[100],ch;
	printf("neter a string:");
	scanf("%s", str);
	printf("enter a character:");
	scanf(" %c",&ch);
	char *ptr= strchr(str,ch);
	if (ptr) {
		printf("first occurrence: %s",ptr);
	}
	else {
		printf("character not found");
	}
}
