#include<stdio.h>       // For writing 'w'
int main(){

    FILE *fptr;
    fptr = fopen("Test.txt","w");

    fprintf(fptr,"%c",'g');
    fprintf(fptr,"%c",'a');
    fprintf(fptr,"%c",'h');
    fprintf(fptr,"%c",'l');
    fprintf(fptr,"%c",'o');
    fprintf(fptr,"%c",'u');
    fprintf(fptr,"%c",'t');
    
    fclose(fptr);
}