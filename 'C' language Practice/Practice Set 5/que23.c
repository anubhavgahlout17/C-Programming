#include<stdio.h>                   // Max and Min numbers is an array
int main(){
    int arr[] = {25,28,98,99,74,-2,-1,50};
    int max = arr[0];
    int min;
   
    for (int i = 0; i < 8; i++)
    {
          if (arr[i] > max) {
            max = arr[i];  
        }
        if (arr[i] < min) {
            min = arr[i];  
        
    }
    }
    printf("Max: %d\n",max);
    printf("Min: %d\n",min);

    return 0;

}