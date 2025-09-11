#include <stdio.h>
int main()
{
    int a = 181, b = 190, c = 20;

    if (a > b && a > c)
    {
        printf(" Greater Number is: %d\n", a);
    }
    else if (b > a && b > c )
    {
        printf("Greater Number is: %d\n", b);
    }

    else
    {
        printf("Greater Number is: %d\n", c);
    }

    return 0;
}