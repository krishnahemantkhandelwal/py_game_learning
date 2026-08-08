#include <stdio.h>
#include <string.h>
int main() {
	char str[100];
	printf("enter a string: ");
	scanf("%s",&str);
	printf("length: %lu",strlen(str));
}
