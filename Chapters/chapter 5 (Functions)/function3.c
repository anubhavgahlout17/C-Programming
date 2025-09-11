#include<stdio.h>

void table(int n);    

void table(int n){       // parameter/formal parameter   
    for(int i = 1; i<=10; i++)
    printf("%d X %d = %d\n", n, i, i*n);


}

int main(){
    int n;
    printf("Enter a value : ");
    scanf("%d", &n);
    table(n);    //argument/actual/parameter


    return 0;
}