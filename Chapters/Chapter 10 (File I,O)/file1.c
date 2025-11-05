#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("Tes.txt","r");
    if (fptr == NULL)       
    {
        printf("File Doesn't Exist");

    }
    else
    {
        fclose(fptr);
    }
    return 0;
}