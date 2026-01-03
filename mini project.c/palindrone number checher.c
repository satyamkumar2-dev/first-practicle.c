#include <stdio.h>
int main() {
    int num, originalNum, reversed = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;
    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }
    if (originalNum == reversed) {
        printf("The number is a Palindrome.\n");
    } else {
        printf("The number is Not a Palindrome.\n");
    }

    return 0;
}
