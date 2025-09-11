#include<stdio.h>

int main(){
    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    int b;
    printf("Enter b: ");
    scanf("%d", &b);

    if(a>b){
        printf("Smaller number is: %d\n", b);
    }
    
    else if(b>a){
        printf("Smaller number is: %d\n", a);
    }

    else if(b==a){
        printf("Both are Equal\n");
    }

    return 0;
}