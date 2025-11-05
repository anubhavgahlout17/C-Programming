#include<stdio.h>           // Use of fgetc like (fprintf)  for reding file "r" 
                             
int main(){

    FILE *fptr;
    fptr = fopen("Test.txt","r");

    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));



fclose(fptr);
}