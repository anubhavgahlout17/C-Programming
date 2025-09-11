#include<stdio.h>

int main(){
    int n;
    printf("Enter a No : ");
    scanf("%d", &n);

    for(int i = 10; i>=1; i--){
        printf("%d\n", n);
    }
    return 0;
}
