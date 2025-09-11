#include<stdio.h>  // 
int largest_arr(int arr[], int n);
int largest_arr(int arr[],int n){
    int max = arr[0];
    for(int i = 1; i < n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
        
    }
    return max;
}
int main(){
    int maxx[10] = {15,55,-85,99,95,28,66,49,20,89};
   int larger = largest_arr(maxx,10);
    printf("Largest array: %d\n",larger);
    return 0;
}

