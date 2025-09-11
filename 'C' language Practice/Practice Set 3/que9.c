#include<stdio.h>
int main(){                 // Odd Even
    int a;
    printf("Enter num ");
    scanf("%d", &a);
                          
    if(a == 0){
        printf(" This is Whole Number");
   }
   else if (a % 2 ==0)
   {
    printf("this is even number");
   }
   else{
    printf("This is odd number");
   }
   return 0;
}