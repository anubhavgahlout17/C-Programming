#include<stdio.h>

int main(){
    int i;
    int *ptr1;
    printf("Enter Number: ");
    scanf("%d", &i);

    ptr1 = &i;

    printf("Square of %d is %d\n", i, (*ptr1)*(*ptr1));
    printf("Cube of %d is %d\n", i, (*ptr1)*(*ptr1)*(*ptr1));
    return 0;
}