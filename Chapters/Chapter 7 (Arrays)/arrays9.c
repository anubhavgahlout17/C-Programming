#include<stdio.h>            // arrays as functionxv

void PrintNumber(int arr[],int n);
void printNumber(int arr[],int n){
    for(int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
    printf("\n");
}

int main (){
    int arr[]= {1,2,3,4,5,6};
    printNumber(arr,6);
    return 0;
}