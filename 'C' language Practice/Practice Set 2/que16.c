#include<stdio.h>

int main(){
    int num = 27 , num2 = 54;
    int *ptr = &num;
    int *ptr1 = &num2;

int temp;
temp = *ptr;
*ptr = *ptr1;
*ptr1 = temp;

printf("num = %d and num2 = %d\n", num, num2);
return 0;

}