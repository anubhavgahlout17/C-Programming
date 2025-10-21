#include<stdio.h>                          // Pointer Arithmatic using Integer Pointer
                                          
int main(){

int a = 5;
int *ptr = &a;
printf("The address of a: %p\n", &a);
printf("The address of a: is %p\n",ptr);
ptr++;
printf("The address of a: %p\n",ptr);
return 0;
}