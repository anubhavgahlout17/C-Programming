#include<stdio.h>                //Eligible for Voting
int main(){
    int age;
    printf("Enter age: ");
    scanf("%d",&age);

    if (age < 18)
    {
        printf("Not Eligible for Voting\n");
    }
    else{
        printf("Eligible for Voting\n");
    }
    return 0;
    
}