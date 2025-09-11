#include <stdio.h>                   // Check Prime Numbers

int main()
{
    int a;
    int isprime = 1;
    printf("Enter number: ");
    scanf("%d", &a);

    if (a <= 1)
    {
        isprime = 0;
    }
    for (int i = 2; i * i <= a; i++)
    {
        if (a % 2 == 0)
        {
            isprime = 0;
    
        }
    }
    if(isprime){
        printf("This no. is Prime Number");
    }
    else{
        printf("This number is not Prime Numver");
    }

    return 0;
}