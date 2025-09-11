#include<stdio.h>                       // Factorial by without function but with loop
int main(){
    int fact;
int fact1 = 1;
    printf("ENter num: ");
    scanf("%d",&fact);

    if(fact == 0){
        return 0;
    }
    for(int i = 1; i <= fact ; i++){

        fact1 = fact1*i;
    }
printf("fact is: %d\n", fact1);
          return 0;
}