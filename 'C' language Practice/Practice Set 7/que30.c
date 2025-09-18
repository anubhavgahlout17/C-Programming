#include<stdio.h>                   // Swap pointer
int main(){
    int a = 5, b = 9;
    int *ptr = &a;
    int *ptr1 = &b;

    int temp;
    temp = *ptr;
    *ptr = *ptr1;
    *ptr1 = temp;
    
    printf("a: %d, b: %d",a,b);
return 0;    
}