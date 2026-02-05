#include <stdio.h>
void main() {
    int num, temp, sum;

    printf("enter a number:");
    scanf("%d", &num);
     temp = num;
     sum = 0;
     while (temp > 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp = temp / 10;

     }
     if (sum == num) {
         printf("is an armstrong number",num);
     } else {
         printf("is not a armstrong number,num");
     }
}