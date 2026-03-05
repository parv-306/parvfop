#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    long long fact = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Square root = %.2f\n", sqrt(n));
    printf("Square = %d\n", n*n);
    printf("Cube = %d\n", n*n*n);

    // Prime check
    for(i = 2; i <= n/2; i++) {
        if(n % i == 0)
            break;
    }
    if(n <= 1)
        printf("Not Prime\n");
    else if(i > n/2)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    // Factorial
    for(i = 1; i <= n; i++)
        fact *= i;
    printf("Factorial = %lld\n", fact);

    // Prime factors
    printf("Prime factors: ");
    for(i = 2; i <= n; i++) {
        while(n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }

    return 0;
}
     
    

     
