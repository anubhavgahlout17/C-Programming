#include<stdio.h>
int main(){
    int arr[4];
printf("enter 1:  ");                // Arrays
scanf("%d", &arr[0]);

printf("enter 2:  ");
scanf("%d", &arr[1]);

printf("enter 3:  ");
scanf("%d", &arr[2]);

printf("enter 4:  ");
scanf("%d", &arr[3]);

printf("Index of 1 is %d\n",arr[0]);
printf("Index of 2 is %d\n",arr[1]);
printf("Index of 3 is %d\n",arr[2]);
printf("Index of 4 is %d\n",arr[3]);
return 0;
}