#include<stdio.h>                                     //To swap the values of variables without using third variable. 
int main(){         
    int a = 10, b = 5;
    a = a+b;
    b = a - b;
    a = a-b;
    printf("a %d and b %d\n", a, b);
    
    return 0;
}
