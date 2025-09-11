#include<stdio.h>

int natural(int n);

int natural(int n){
    if(n==1){
        return 1;
    }
    
    return natural(n-1)+n;
}
int main(){
    
    printf("The sum is : %d\n", natural(5));

    return 0;
}