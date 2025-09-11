#include<stdio.h>                 // Count even and odd no. in an array
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,14,13,19};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int even = 0, odd = 0;

    for (int i = 0; i < n; i++)
    {
           if (arr[i] % 2 == 0)
           {
            even++;
           }
           else{
            odd++;
           }
    }
    printf("Total even no.: %d\n",even);
    printf("Total odd no: %d",odd);
    return 0;
}