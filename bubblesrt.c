#include<stdio.h>
void Bubblesort(int a[], int n)
{
    int i, j, temp;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}   
int main()
{
    int a[10], n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {

        scanf("%d", &a[i]);
    }   
    Bubblesort(a, n);
    printf("Sorted array: ");
    for(i=0; i<n; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }
    return 0;
}
