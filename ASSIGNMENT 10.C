 #include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    int ch, num1, num2;

    printf("Enter first number: ");
    scanf("%d",&num1);

    printf("Enter second number: ");
    scanf("%d",&num2);

    printf("\n1 Addition\n2 Subtraction\n3 Multiplication\n4 Division\n5 Power\n6 Factorial\n7 Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1:
        printf("Addition: %d\n", num1+num2);
        break;

    case 2:
        printf("Subtraction: %d\n", num1-num2);
        break;

    case 3:
        printf("Multiplication: %d\n", num1*num2);
        break;

    case 4:
        if(num2 != 0)
            printf("Division: %.2f\n", (float)num1/num2);
        else
            printf("Error: Division by zero\n");
        break;

    case 5:
        printf("Power: %.0f\n", pow(num1, num2));
        break;

    case 6:
        if(num1 < 0) {
            printf("Factorial not defined for negative numbers\n");
        } else {
            int factorial = 1;
            for(int i = 1; i <= num1; i++) {
                factorial *= i;
            }
            printf("Factorial: %d\n", factorial);
        }
        break;

    case 7:
        printf("Exiting...\n");
        exit(0);

    default:
        printf("Invalid choice\n");
    }

    return 0;
}