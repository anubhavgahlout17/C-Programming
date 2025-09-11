#include<stdio.h>
int main(){
int age1 = 8;
int age2 = 5;
int *ptr1 = &age1;
int *ptr2 = &age2;

printf("Address of age 1 is : %p\n",ptr1);
printf("Address of age 2 is : %p\n",ptr2);
return 0;
}