#include <stdio.h>
#include <string.h>
int main() {
	char str1[100],str2[100];
	printf("enter first string:");
	gets(str1);
	printf("enter second string:");
	gets(str2);
	strcat(str1, str2);
	printf("concateneted string: %s",str1);
}
