# include<stdio.h>
# include<math.h>
   int main()
{  float km ,miles,a,b;
    printf("enter distance in km and miles /n");
    scanf("%f%f",&km,&miles);  
    a=km*0.621;
    b=miles/0.621;
    printf("distance in miles is %f",a );
    printf("distance in km is %f",b);
    return 0;
}