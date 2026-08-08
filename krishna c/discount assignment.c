#include <stdio.h>

int main() {
    float amount; 
	float discount= 0; 
	float finalAmount;
    printf("enter total purchase amount:");
    scanf("%f",&amount);
    if (amount>=5000) {
        discount = amount*0.20;   
    } 
	else if (amount>=1000) {
        discount = amount*0.10;  
    } 
	else {
        discount = 0;         
    }
    finalAmount = amount - discount;
    printf("discount: %.2f\n",discount);
    printf("amount to pay: %.2f",finalAmount);
}

