#include<stdio.h>            //Table
int main(){
    int table;
    printf("Enter num: ");
    scanf("%d",&table);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", table,i,table*i);
    }
    return 0;
    
}