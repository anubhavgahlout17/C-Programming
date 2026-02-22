#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("Data.txt","w");
    char ch;
    fputc('N',fp);
    fputc('A',fp);
    fputc('M',fp);
    fputc('E',fp);
    fprintf(fp,"%c",'A');
    fprintf(fp,"%c",'N');
    fprintf(fp,"%c",'U');

    fclose(fp);
    return 0;
}