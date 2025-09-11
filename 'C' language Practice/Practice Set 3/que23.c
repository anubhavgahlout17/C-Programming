#include <stdio.h>

int main()
{                                                      // Arrays 
    int odd_even[5] = {1, 2, 3, 4, 5};


    for (int i = 0; i < 5; i++)
    {
        if (odd_even[i] % 2 == 0)
        {
            printf("even no. is: %d\n", odd_even[i]);

        }

        else if(odd_even[i] % 2 != 0){
            printf("Odd number is: %d\n", odd_even[i]);

        }
    }

    return 0;
}