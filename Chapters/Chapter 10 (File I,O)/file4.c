#include<stdio.h>       // Add words in existing file by 'a' for append"
int main(){

    FILE *fptr;
    fptr = fopen("Test.txt","a");

    fprintf(fptr,"%c",'g');
    fprintf(fptr,"%c",'a');
    fprintf(fptr,"%c",'h');
    fprintf(fptr,"%c",'l');
    fprintf(fptr,"%c",'o');
    fprintf(fptr,"%c",'u');
    fprintf(fptr,"%c",'t');
    
    fclose(fptr);
}