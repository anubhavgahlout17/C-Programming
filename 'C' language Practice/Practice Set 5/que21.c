#include<stdio.h>               // Reverse an Array
int main(){
    int arr[] = {25,56,12,74,55,57};
    int n = 6;

    for(int i = 0; i<n/2;i++){
       int temp;
       temp = arr[i];
       arr[i] = arr[n-i-1];
       arr[n-i-1] = temp;
    }

    for(int i = 0;i < n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}