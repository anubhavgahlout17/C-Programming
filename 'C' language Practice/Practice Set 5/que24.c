#include<stdio.h>           //  Ascending order in an array
int  main(){
    int arr[] = {25,11,22,55,44,77};
    int n = 6;

    for (int i = 0; i < n-1; i++){
        for (int j = i; j < n; j++)
        {
            if(arr[i]>arr[j]){
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
     printf("Ascending order: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ",arr[i]);
        }
 
    return 0;
    
}