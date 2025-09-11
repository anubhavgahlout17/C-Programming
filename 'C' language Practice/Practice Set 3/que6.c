#include<stdio.h>           // Swaping without using ithird variables
int main(){
    int a = 2, b = 4;
    a = a+b; // = 6
    b = a-b; // = 2
    a = a -b;

    printf("a = %d , b = %d\n", a, b);
    return 0;

}