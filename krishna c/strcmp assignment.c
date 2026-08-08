#include <stdio.h>
#include <string.h>
int main() {
	char str1[100], str2[100];
	printf("enter 2 strings:");
	scanf("%s %s",&str1,&str2);
	if(strcmp(str1, str2)== 0) {
		printf("string are equal");
	}
	else {
		printf("strings are not equal");
	}
}
