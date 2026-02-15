#include <stdio.h>
int main() {
    int n, fact = 1, i;
     
    printf("enter the num");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact = fact * i;

    }
    printf("the factorial of no is %d\n", fact);
        return 0;
        
    
    

}