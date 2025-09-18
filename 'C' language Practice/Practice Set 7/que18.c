#include<stdio.h>              //rever an array
int main(){
    int arr[] = {25,23,78,36,98};
    int n = 5;
    int rev[5];

    for (int i = 0; i < n; i++)
    {
          rev[i] = arr[n-1-i];
          printf("%d ", rev[i]);
    }
    return 0;
    
    
    
}