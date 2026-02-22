#include<stdio.h>             //Reverse string without use string libraary
int main(){                                 
    char name[20] = "Anubhav";
    char rev[20];
    int length = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
         length++;
    }
    

    for (int i = 0; i < length; i++)
    {
        rev[i] = name[length-1-i];
        rev[length] = '\0';
    }
    printf("reversed: %s",rev);
    
    return 0;
}