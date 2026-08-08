#include <stdio.h>

int main() {
    float basic;
    float hra;
    float da;
    float gross;

    printf("enter basic salary:");
    scanf("%f",&basic);

    if (basic<=10000) {
        hra= 0.20*basic;
        da= 0.80*basic;
    } 
    else if (basic<=20000) {
        hra= 0.25*basic;
        da= 0.90*basic;
    } 
    else {
        hra= 0.30*basic;
        da= 0.95*basic;
    }
    gross= basic+hra+da;
    printf("gross salary= %.2f",gross);
}

