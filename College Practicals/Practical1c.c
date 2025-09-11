#include<stdio.h>                       // To swap the values of variables using third variable.

int main(){
    int a = 6, b = 8;
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("The vale of a is %d and The b is %d\n", a , b);
    return 0;
}