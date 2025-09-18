#include<stdio.h>               // This is called Call By Reference
                   
int sum (int *a , int *b);

int sum(int *a, int *b){

       *a = 9;         // Now, *a change the value of x 

    return *a + *b;
}

int main(){
    
    int x = 1,y= 6;

    printf("The sum is: %d\n", sum(&x,&y));
    
    return 0;
}