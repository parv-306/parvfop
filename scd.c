 #include <stdio.h>
int main() {

int num1;
int num2;

int old_div=2;
int new_div;

printf("enter the first number:");
scanf("%d", &num1);
 
printf("enter the second number:");
scanf("%d", &num2);

for(old_div;old_div<num1 && old_div<num2;old_div++){
    if(num1%old_div==0 && num2%old_div==0) {
        new_div = old_div;
        break;

    
    }
}
printf("the scd of the number is %d", new_div);
    return 0;
}
