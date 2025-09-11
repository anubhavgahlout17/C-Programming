#include<stdio.h>
int main(){
 int arr[] = {25,85,14,55,77};
 int *ptr = &arr[0];

 for(int i = 0; i < 5; i++){
    printf("%d\n",ptr[i]);
 }
 return 0;
}