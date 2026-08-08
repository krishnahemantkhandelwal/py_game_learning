#include <stdio.h>

int main() {
    int i= 1;
    int sum= 0;
    do {
        sum= sum+i;
        i++;
    }while(i <= 5);
    printf("sum of numbers from 1 to 5 is: %d",sum);
}

