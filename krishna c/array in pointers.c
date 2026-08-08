#include <stdio.h>

int main() {
	int array[]= {5, 10, 15};
	int *ptr= array;
	printf("%d\n",*ptr);
	printf("%d\n",*(ptr+1));
}
