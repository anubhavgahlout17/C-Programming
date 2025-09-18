#include<stdio.h>             // Count even and odd in an array
int main(){
    int arr[] = {2,5,9,7,4,5,6,98,74};
    int even = 0;
    int odd = 0;
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else{
            odd++;
        }
        
    }
    printf("Even: %d\n",even);
    printf("Odd: %d\n", odd);
    return 0;
    
}