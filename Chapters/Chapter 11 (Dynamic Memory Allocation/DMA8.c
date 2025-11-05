#include<stdio.h>              //que: Create an array of size 5(using calloc) & enter its value from the user
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int*) calloc(5,sizeof(int));


    printf("Enter 5 num: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&ptr[i]);
        
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",ptr[i]);
    }
    
    
return 0;

}