# include<stdio.h>
# include<math.h>
  int main()
{   int a,b,c,d,e;
    printf("enter total number of days /n");
    printf(" a=total number of days /n");
    scanf("%d",&a);
    b=a/365 ;
    c=a%365;
    d=c/30;
    e=d%30;
    printf("number of years is %d",b);  
    printf("number of months is %d",d);
    printf("number of remaining days is %d",e);
    return 0;
}