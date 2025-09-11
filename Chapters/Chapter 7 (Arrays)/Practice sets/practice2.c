#include<stdio.h>      // count odd numbers

int oddNum(int arr[], int a);
int oddNum(int arr[], int a){
    int count = 0;
    for(int i = 0; i <= a; i++){
        if(arr[i] % 2 != 0){
            count ++;
        }
 
    }
    return count++;
}   

int main (){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int result = oddNum(arr,10);
    printf("Odd Numbers is %d\n",result);
    return 0;

}