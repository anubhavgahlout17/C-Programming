#include<stdio.h>            // factorial Number
int main(){
    int a;
    int fact = 1;
    printf("Enter a: ");
    scanf("%d", &a);

    if(a == 0){
        return 0;
    }
    if (a == 1)
    {
        return 1;
    }
    for (int i = 1; i <= a; i++)
    {
        fact = fact*i;
    }
    printf("Factorial is: %d\n",fact);
    return 0;
}