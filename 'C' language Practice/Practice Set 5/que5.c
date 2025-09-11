#include<stdio.h>                         // count digits
int main(){
    int a = 12345678;
    int count = 0;
    for (; a != 0; a = a/10)
    {
        count++;
    }
printf("%d\n",count);
    return 0;
    
}