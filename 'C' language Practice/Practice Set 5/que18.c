#include<stdio.h>              //Swap numbers using Pointers
int main(){
    int a = 76,b = 87;
    int *ptr1 = &a;
    int *ptr2 = &b;

    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("a = %d and b = %d\n",*ptr1,*ptr2);
    return 0;


}
