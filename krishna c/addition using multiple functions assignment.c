#include <stdio.h>

int getInput() {
	int x;
	printf("Enter a number: ");
	scanf("%d", &x);
	return x;
}

int square(int n) {
	return n * n;
	}

void display(int result) {
	printf("Result: %d\n", result);
}


int main() {
int num = getInput();
printf("value of c: %d",num);
int result = square(num);
display(result);
return 0;
}
