#include<stdio.h>
#include<math.h>
int main ()
{
    float p,roi,t,si,ci,amount;
    printf("enter principal amount,rate of interest,time,");
    scanf("%f%f%f",&p,&roi,&t);
    si=(p*roi*t)/100;
    amount=p*(pow((1+roi/100),t));
    ci=amount-p;
    printf("compount interest=%f,%f",si,ci);
     return 0;
}