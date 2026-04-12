 #include <stdio.h>

int main() {
    int n, i;
    double x, term, sum = 0.0;

    printf("Enter x (in radians): ");
    scanf("%lf", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    term = x;

    for(i = 1; i <= n; i++) {
        sum += term;
        term = -term * x * x / ((2*i)*(2*i+1));
    }

    printf("Sum of sine series: %.6lf\n", sum);

    return 0;
}