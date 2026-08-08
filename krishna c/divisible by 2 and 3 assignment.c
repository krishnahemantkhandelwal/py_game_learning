#include <stdio.h>

int main() {
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if (num%2==0 && num%3==0) {
        printf("The number is divisible by both 2 and 3");
    }
    else if (num%2==0) {
        printf("the number is divisible by 2");
    }
    else if (num%3==0) {
        printf("the number is divisible by 3");
    }
    else {
        printf("the number is not divisible by 2 or 3");
    }
}

