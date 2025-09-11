#include<stdio.h>            // max and min element in an array
int main(){
    int arr[] = {25,63,47,-66};
    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Max: %d\n",max);
    printf("Min: %d\n",min);
    return 0;
}