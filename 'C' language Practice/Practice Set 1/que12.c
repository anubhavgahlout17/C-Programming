#include<stdio.h>

int main(){
    char ch1 = 'a';
   
    char *ptr1 = &ch1;


    for(int i = 0; i < 26; i++){
    printf("%c\n",*ptr1);
    (*ptr1)++;
    }

    
     return 0;
}