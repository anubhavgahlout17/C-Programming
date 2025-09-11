#include<stdio.h>                       
int main(){
    int age = 25;
    int *ptr1 = &age;
    printf("Original: %d\n",ptr1);
    ptr1++;
    printf("Increment: %d\n",ptr1);
    ptr1--;
    printf("Decrement: %d\n",ptr1);

    //add
    ptr1 = ptr1 + 2;
    printf("After p+2: %d\n",ptr1);
     //Sub
    ptr1 = ptr1 - 1;
    printf("After P-1: %d\n",ptr1);
    return 0;
 }