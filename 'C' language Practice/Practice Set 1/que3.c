#include<stdio.h>


int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    int b;
    printf("Enter a number: ");
    scanf("%d", &b);

    int c;
    printf("Enter a number: ");
    scanf("%d", &c);
    

    printf("The average is: %d\n", (a+b+c)/3);

    return 0;

}