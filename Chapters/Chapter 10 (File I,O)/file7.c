#include<stdio.h>                // Read full line or paragraph by using fgetc
int main(){
    FILE *fptr;
    fptr = fopen("Test.txt","r");

    char ch;
    ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf("%c",ch);
        ch = fgetc(fptr);
    }

    fclose(fptr);
    return 0;
}