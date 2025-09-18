#include<stdio.h>

int square(int n){
    return n*n;
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Square: %d\n",square(n));
    return 0;
    
}