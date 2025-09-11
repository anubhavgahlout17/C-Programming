#include<stdio.h>
int main(){
    int sum[5];

    printf("enter: ");
    scanf("%d", &sum[0]);

    printf("enter: ");
    scanf("%d", &sum[1]);

    printf("enter: ");
    scanf("%d", &sum[2]);

    printf("enter: ");
    scanf("%d", &sum[3]);

    printf("enter: ");
    scanf("%d", &sum[4]);

    printf("Sum is: %d\n", sum[0]+sum[1]+sum[2]+sum[3]+sum[4]);
    return 0;
}