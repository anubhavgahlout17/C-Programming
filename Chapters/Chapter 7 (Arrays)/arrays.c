#include<stdio.h>                   //Enter Element in an array
int main(){
    int n;
    printf("Enter no. of index ");
    scanf("%d",&n);
    int arr[n];
    
     printf("Enter %d num: ",n);
    for (int i = 0; i < n; i++)   // inner loop for scanf
    {
        scanf("%d",&arr[i]);
      
    }
     for (int i = 0; i < n; i++)     // outer loop for print output
    {
       
        printf("%d ",arr[i]);
    }
    
              
    return 0;
}