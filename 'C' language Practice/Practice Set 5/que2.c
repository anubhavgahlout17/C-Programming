#include<stdio.h>                //Print an array by user input
int main(){
    int arr[5];
    
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < 5; i++){
    printf("%d index of %d\n",arr[i],arr[i]);

    }

    return 0;
}