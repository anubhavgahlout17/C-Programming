#include<stdio.h>              //Factorial Number without recursion
int main(){
    int fact;
    int a = 1;
    printf("Enter a number: ");
    scanf("%d",&fact);

    for (int i = 1; i <= fact; i++)
    {
        if(fact == 0){
            return 0;
        }
        if (fact == 1)
        {
            return 1;
        }
               a = a*i;
    }
    printf("The factorial is: %d", a);
 return 0;   
}