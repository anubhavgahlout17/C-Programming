#include<stdio.h>
int main (){                                  //Check the entered number is odd or even
    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    if(a % 2 == 0){
        printf("%d is even no.\n", a);
    }
    else{
        printf("%d is odd no.\n", a);
    }

    return 0;
}