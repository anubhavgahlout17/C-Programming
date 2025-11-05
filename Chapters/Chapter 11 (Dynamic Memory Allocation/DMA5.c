#include<stdio.h>     // que: WAP to allocate memory of size n, where n is entered by the user. By calloc()
#include<stdlib.h>

int main(){
    int *ptr;
    int n;
    printf("Enter No: ");
    scanf("%d",&n);
    ptr = (int*) calloc(n,sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("%d\n",ptr[i]);
    }
    

    return 0;
}