#include <stdio.h>
int main() {
    int ch;
    int num1;
    int num2;
    printf("enter the first number");
    scanf("%d", &num1);
    printf("enter the second number");
    scanf("%d", &num2);
    printf("enter the number\n 1 for addition\n 2 for subtraction\n 3 for multiplication\n 4 for division ");
    switch (ch) 
    { 
        case(1): 
            printf("addition of two numbers%d\n",num1 + num2);
        break;

        case(2):
            printf("subtraction of two numbers%d\n",num1 - num2);
        break;

        case(3):
            printf("multiplication of two numbers%d\n",num1% num2);
        break;

        case(4):
            printf("division of two numbers%d\n",num1/num2);
        break;

            
    }



    
    return 0;

}
