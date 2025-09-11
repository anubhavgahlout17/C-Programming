#include<stdio.h>               //Even and odd
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("Even\n");
        }
        else{
            printf("Odd\n");
        }
        
    }
    return 0;
    
}