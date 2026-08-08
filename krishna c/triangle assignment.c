#include <stdio.h>

int main() {
    int a;
    int b;
	int c;
    printf("enter three sides of the triangle:");
    scanf("%d %d %d", &a, &b, &c);
    if (a+b>c && a+c>b && b+c>a) {
        printf("the triangle is valid");
    } 
	else {
        printf("the triangle is not valid");
    }
}

