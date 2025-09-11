#include<stdio.h>
int main(){


int num = 10;
int *ptr = &num;


for(int i = 1; i<=5;i++){
    printf("%d\n", *ptr+i);
}






return 0;
}