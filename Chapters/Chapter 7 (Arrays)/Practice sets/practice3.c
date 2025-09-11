#include<stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    printf("value is: %d\n", *(arr+2));
    printf("value is: %d\n", *(arr+5));
    
    return 0;
}