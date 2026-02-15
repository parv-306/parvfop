#include<stdio.h>
int main() {
    float salary,hra,ta,gs,prof_tax,net;
    printf("enter the salary");
    scanf("%f", &salary);

    hra = 0.10 * salary;
    ta = 0.05 * salary;
    gs = salary + hra + ta;
    prof_tax = 0.02 * gs;
    net = gs - prof_tax;
    printf("the value of hra%f\n",hra);
    printf("the value of ta%f\n",ta);
    printf("the value of gs%f\n",gs);
    printf("the value of prof_tax%f\n",prof_tax);
    printf("then calculate net value %f\n",net);
    return 0;

}
  