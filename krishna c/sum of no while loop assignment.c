#include <stdio.h>

int main() {
    int num= 1;
    int sum= 0;
    while (num<=5) {
        sum= sum+num;
        num++;
    }
    printf("sum of numbers from 1 to 5= %d", sum);
}

