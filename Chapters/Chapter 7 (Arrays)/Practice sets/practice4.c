#include<stdio.h>
void reverse(int arr[], int n);
void reverse(int arr[], int n){
    for(int i = 0; i < n/2; i++){
        int first_value = arr[i];
        int second_value = arr[n-i-1];
        arr[i] = second_value;
        first_value = arr[n-i-1];
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    reverse(arr,6);
    printf("Reverse: %d\n");
    return 0;
}