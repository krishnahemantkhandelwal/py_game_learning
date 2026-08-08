#include <stdio.h>
#include <string.h>

int main() {
	char str1[100], str2[100];
	printf("enter two strings:");
	scanf("%s %s",str1,str2);
	if (strcmp(str1,str2)!=0) {
		strcat(str1,str2);
		printf("concatenated: %s\n", str1);
		printf("length = %lu",strlen(str1));
	} 
	else {
		printf("strings are equal. no concat performed.\n");
	}
}
