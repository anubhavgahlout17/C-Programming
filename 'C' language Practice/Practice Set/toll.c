#include<stdio.h>

int main(){
    int n;
    printf("Enter no : ");
    scanf("%d\n", &n);

    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact = fact*i;
    }
    printf("Fatorial No - %d", fact);
    return 0;
}