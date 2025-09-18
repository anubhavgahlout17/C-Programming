#include<stdio.h>              //Reverse String
#include<string.h>
int main(){
    char str[10] = "Anubhav";
    char rev[10];
    char n = strlen(str);

    for (int i = 0; i < n; i++)
    {
          rev[i] = str[n-1-i];
          rev[n] = '\0';

    }
    printf("Reversed String: %s",rev);
   
    return 0;
}