#include <stdio.h>

/* Non-recursive: loop se factorial */
int factorial_non_recursive(int n) {
    int result = 1;
    for(int i = 1; i <= n; i++)
        result *= i;
    return result;
}

/* Recursive: apne aap ko call karta hai */
int factorial_recursive(int n) {
    if(n == 0 || n == 1) return 1;   // Base case
    return n * factorial_recursive(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Non-Recursive Factorial of %d = %d\n",
           n, factorial_non_recursive(n));
    printf("Recursive Factorial of %d = %d\n",
           n, factorial_recursive(n));

    return 0;
}