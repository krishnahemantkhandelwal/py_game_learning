#include <stdio.h>

int main() {
    float costPrice;
    float sellingPrice;
    float amount;
    printf("enter cost price:");
    scanf("%f",&costPrice);
    printf("enter selling price:");
    scanf("%f",&sellingPrice);
    if (sellingPrice>costPrice) {
        amount= sellingPrice-costPrice;
        printf("profit= %.2f",amount);
    }
    else if (costPrice>sellingPrice) {
        amount= costPrice-sellingPrice;
        printf("loss= %.2f",amount);
    }
    else {
        printf("no profit, no loss");
    }
}

