#include<stdio.h>            //sum and averae of an array
int main(){
    int arr[]= {12,23,24};
    int sum = 0;
    float average;
    for(int i = 0;i < 3;i++){
        sum += arr[i];
    }

        average = sum/3.0;
    
    printf("Sum is: %d\n",sum);
    printf("Average is: %f\n",average);
   
    return 0;
}