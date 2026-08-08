#include <stdio.h>
#include <string.h>

int main() {
	char *ptr= strchr("hello", 'e');
	printf("%c",*ptr);
}
