#include<stdio.h>             // que: Make a program to read 5 integers from a file
int main(){
    FILE *fptr;
    fptr = fopen("Test.txt","r");
    
    int n;
    fscanf(fptr,"%d",&n);
    printf("%d\n",n);
    fscanf(fptr,"%d",&n);
    printf("%d\n",n);
    fscanf(fptr,"%d",&n);
    printf("%d\n",n);
    fscanf(fptr,"%d",&n);
    printf("%d\n",n);
    fscanf(fptr,"%d",&n);
    printf("%d\n",n);

    fclose(fptr);
    return 0;
}