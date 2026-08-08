#include <stdio.h>

int main() {
    float principal;
    float rate;
    float time;
    float simpleInterest;
    printf("enter principal amount:");
    scanf("%f",&principal);
    printf("enter rate of interest:");
    scanf("%f",&rate);
    printf("enter time(in years):");
    scanf("%f",&time);
    simpleInterest= (principal*rate*time)/100;
    printf("simple interest= %.2f",simpleInterest);
}

