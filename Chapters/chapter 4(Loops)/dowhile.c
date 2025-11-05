#include<stdio.h>                          // Do While loop

int main(){
    int n;
    printf("Enter nubmer : ");
    scanf("%d", &n);

    int i = 1;
    do{
        printf("%d\n",i);
        i++;
    }
    while(i<=n);
    
    return 0;
}