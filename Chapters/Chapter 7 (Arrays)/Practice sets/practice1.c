#include<stdio.h>

int main(){
    float price[3];
    printf("enter price 1: ");
    scanf("%f", &price[0]);

    printf("enter price 2: ");
    scanf("%f", &price[1]);

    printf("enter price 3: ");
    scanf("%f", &price[2]);

    printf("price 1: %f\n",(price[0]*0.18)+price[0]);
     printf("price 2: %f\n", (price[1]*0.18)+price[1]);
      printf("price 3: %f\n",(price[2]*0.18)+price[25]);


      return 0;

}