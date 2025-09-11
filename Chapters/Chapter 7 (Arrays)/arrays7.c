// Array using pointer

#include<stdio.h>
int main(){
    int marks[] = {12, 34, 53, 66};

    // int *ptr = marks;   // below both are same
     int *ptr = &marks[0];  // both are same statement = int *ptr = marks;

     for(int i = 0; i < 4; i++){
       // printf("The marks at index %d is %d\n", i, marks[i]);  without using pointer
        printf("The marks at index %d is %d\n", i, *ptr);   
        ptr++;  // with using pointer
     }


  





    return 0;
}
