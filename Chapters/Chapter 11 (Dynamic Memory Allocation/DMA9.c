#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr ;
    ptr = (int *) calloc(3,sizeof(int));
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    
    printf("Odd Numbers: \n");
    for (int i = 0; i < 3; i++){
            printf("%d\n",ptr[i]);
    }
    ptr = realloc(ptr,4* sizeof(int));
    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;

    printf("Even No: \n");
    for (int i = 0; i < 4; i++)
{
        printf("%d\n",ptr[i]);
    }
    return 0;
}