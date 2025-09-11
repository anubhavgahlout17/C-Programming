#include<stdio.h>

int main(){
    int table = 8;

    for(int i = 1; i<=10;i++){
    printf("%d X %d = %d\n", table, i, table*i);
    }
    return 0;
}