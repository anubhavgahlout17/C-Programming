#include<stdio.h>

int main(){

int num =1;
int *ptr = &num;


for(int i = 1; i<5;i++){
(*ptr)++;                          
}

printf("final value: %d\n", num);



return 0;
}

