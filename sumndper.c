#include<stdio.h>
int main(){
int math,phy,chem,hindi,cs,sum,per;
printf("enter sum  of 5 subjects marks");
scanf("%d%d%d%d%d",&math,&phy,&chem,&hindi,&cs);

    sum=math+phy+chem+hindi+cs;
    per=sum/5;

printf("sum and percentage of 5 marks %d,%d",sum,per);

return 0;

}

           