#include<stdio.h>

int main(){
    int i = 6;
    int *j = &i;         // stores i ka addresss
    int **k = &j;      // stores address(j) ka address

    printf("Value is: %d\n", i);    // output value of i is : 6
    printf("value is: %d\n", *j);  // ouput value(*j) is : 6 
    printf("value is: %p\n", j);   // ouput value j is : address of i 6422296...
    printf("value is: %p\n", *(&j));    // ouput value is:   address of i 6422296...
    printf("value is: %d\n", **(&j));   // ouput value is : 6


   return 0;
}