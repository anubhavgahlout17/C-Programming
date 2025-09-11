#include<stdio.h>

int main(){
    int a;
    printf("Enter Side a: \n");
    scanf("%d", &a);

    int b;
    printf("Enter Side b: \n");
    scanf("%d", &b);

    printf("The Perimeter of Rectangle is: %d\n", 2*(a+b));

    return 0;
}