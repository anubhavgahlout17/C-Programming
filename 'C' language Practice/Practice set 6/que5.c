#include<stdio.h>                        //Reverse digits
int main(){
    int n,digit;
    int rev = 0;
    printf("Enter num: ");
    scanf("%d",&n);

    while (n != 0)
    {
        digit = n % 10;
        rev = rev*10+digit;
        n = n/10;
    }
    printf("Reversed number: %d", rev);
    return 0;

}