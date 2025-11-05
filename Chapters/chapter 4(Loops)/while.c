#include<stdio.h>
                                    // While Loop
int main(){
    int n;
    printf("Enter nubmer : ");
    scanf("%d", &n);

    int i = 0;
    while(i<=n){
        printf("%d\n" ,i);
        i++;
    }
    return 0;
}