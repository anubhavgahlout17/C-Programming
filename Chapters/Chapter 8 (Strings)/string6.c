#include<stdio.h>                // Practice of full name enter by fgets that is scanf in string

int main(){
        char name[100];
        fgets(name,100,stdin);
        puts(name);
    
    return 0;
}
