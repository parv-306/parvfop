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




} 

return 0;    

}