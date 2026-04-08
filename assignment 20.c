#include<stdio.h>
void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("the value of a after swapping %d\n",a);
    printf("the value of b after swapping %d\n",b);
}

int main() {
    int a, b;
    printf("enter the value of a and b");
    scanf("%d %d", &a, &b);
    printf("the value of a before swapping %d\n",a);
    printf("the value of b before swapping %d\n",b);
    swap(a, b);
    
}


