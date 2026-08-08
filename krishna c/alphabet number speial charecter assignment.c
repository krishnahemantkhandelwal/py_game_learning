#include <stdio.h>

int main() {
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    if ((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')) {
        printf("the character is an alphabet");
    }
    else if (ch>='0' && ch<='9') {
        printf("the character is a digit");
    }
    else {
        printf("the character is a special character");
    }
}

