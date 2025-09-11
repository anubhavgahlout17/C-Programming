#include<stdio.h>                    // Sum of all array elements
int main(){
    int arr[] = {2,6,2};
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        sum += arr[i];
    }
    printf("Sum is: %d\n",sum);
    return 0;
}