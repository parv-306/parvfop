#include <stdio.h>
int main() {    
    int num, reversedNum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        int digit = num % 10; // Get the last digit
        reversedNum = reversedNum * 10 + digit; // Append the digit to the reversed number
        num /= 10; // Remove the last digit
    }

    printf("Reversed number: %d\n", reversedNum);
    return 0;
}