#include<stdio.h>

int main(){
    int a;
    int b;
    int c;
    printf("Enter value of a : \n");
    scanf("%d", &a);
    printf("Enter value of b : \n");
    scanf("%d", &b);
    printf("Enter value of c : \n");
    scanf("%d", &c);
    printf("Average of a,b and c is : %d\n", (a+b+c)/3);
    return 0;
}