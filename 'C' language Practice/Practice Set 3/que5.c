#include<stdio.h>                       // Swaping with temp
int main(){
    int a = 5, b = 13;
    int temp;
    temp = a;                    
    a = b;
    b = temp;

    printf("a = %d , b = %d\n", a , b);
    return 0;

}