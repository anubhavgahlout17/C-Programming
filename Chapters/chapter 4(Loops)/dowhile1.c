#include<stdio.h>                        // Do While Loop

int main(){
 int n;
 int sum = 0;
 printf("Enter No: ");
 scanf("%d",&n);
 
 int i = 1;
    do
    {   sum = sum + i; 
        
            i++;
    }
     while(i <=n);
     printf("Sum is: %d\n",sum);

    return 0;
    
}