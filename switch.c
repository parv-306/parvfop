#include<stdio.h>
#include<stdio.h>
int main() {
int ch;
int num1;
int num2;

printf("enter the first number");
scanf("%d",&num1);

printf("enter second number");
scanf("%d",&num2);


printf("enter the desired number\n 1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n");
scanf("%d",&ch);


switch(ch)
{
case(1):
    printf("addition of two number is ;%d",num1+num2);
break;

case(2):
    printf("subtraction of two number is ;%d",num1-num2);
break;

case(3):
    printf("multiplication of two number is ;%d",num1%num2);
break;

case(4):
    printf("division of two number is ;%d",num1/num2);
break;

case(5):
    printf("%f raised to the power %f is: %f is: %f\n",num1, num2);
break;

case(6):
   printf("factorial of %f is: %f is: %f\n", ((int)num1),num1);
break;

case(7):
   exit(0);
break;

default :
break;




} 

return 0;    

}