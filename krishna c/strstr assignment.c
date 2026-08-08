#include <stdio.h>
#include <string.h>

int main() {
	char str[100],substr[50];
	printf("enter main string:");
	gets(str);
	printf("enter substring:");
	gets(substr);
	char *ptr= strstr(str,substr);
	if (ptr) {
		printf("substring found: %s",ptr);
	}
	else {
		printf("substring not found");
	}
}

