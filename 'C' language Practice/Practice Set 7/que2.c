#include<stdio.h>                                  // Add,Subtract,multiply,divide two numbers
int main(){
    int a;
    int b;
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Addition : %d + %d = %d\n",a,b,a+b);
    printf("Subtraction : %d - %d = %d\n",a,b,a-b);
    printf("Mutiplication : %d X %d = %d\n",a,b,a*b);
    printf("Division : %d / %d = %d\n",a,b,a/b);
    return 0;
}