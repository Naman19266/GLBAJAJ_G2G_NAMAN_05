#include <stdio.h>
int main() {
    int sum = 0;
    int n, i;
    
    printf("enter number of element:");
    scanf("%d",&n);
    
    int arr[n];
    
    //input elements
    printf("enter elements:\n");
    for( i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    
    //calculate sum
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    
    //output result
        printf("sum of elements=%d",sum);
        
        return 0;
    }