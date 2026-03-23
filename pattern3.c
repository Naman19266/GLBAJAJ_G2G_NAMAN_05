#include<stdio.h>
int main()
{
    int rows=3;
    for(int i=1;i<=rows;i++)
    {
        char letter='A';
        for(int j=1;j<=i;j++)
        {
            printf("%c ", letter);
        }
        printf("\n");
    }
    return 0;
}