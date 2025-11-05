#include<stdio.h>
#include<stdlib.h>              // Use of calloc() -> Continuous allocation

int main(){
    int *ptr;
    ptr = (int *)calloc(5,sizeof(int));

   
    for (int i = 0; i < 5; i++)
     {
        printf("%d\n",ptr[i]);

     }
     return 0;

}