#include<stdio.h>
int main()
{
    char operator;
    double n1,n2,result;
    printf("Enter an operator");
    scanf("%c",&operator);
    printf("Enter two operands");
    scanf("%lf%lf",&n1,&n2);

    if(operator=='+')
    {
        result=n1+n2;
        printf("%.2lf+%.2lf=%.2lf\n",n1,n2,result);
    }
    else if(operator=='-')
    {
        result=n1-n2;
        printf("%.2lf-%.2lf=%.2lf\n",n1,n2,result);
    }
    else if(operator=='*')
    {
        result=n1*n2;
        printf("%.2lf*%.2lf=%.2lf\n",n1,n2,result);
    }
    else if(operator=='/')
    {
        result=n1/n2;
        printf("%.2lf/%.2lf=%.2lf\n",n1,n2,result);
    }
    else
    {
        printf("Error!operator is not correct\n");
    }
    return 0;
}
