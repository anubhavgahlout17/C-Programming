#include<stdio.h>           // Use of fputc for write in  file "w"(overwrite)
                             
int main(){

    FILE *fptr;
    fptr = fopen("Test.txt","w");

   fputc('g', fptr);
   fputc('a', fptr);
   fputc('h', fptr);
   fputc('l', fptr);
   fputc('o', fptr);
   fputc('u', fptr);
   fputc('t', fptr);
fclose(fptr);
}