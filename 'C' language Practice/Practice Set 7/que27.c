#include<stdio.h>      //function to check prime
int isprime(int a){
    if (a <= 1)
    {
        return 0;
    }
    for (int i = 2; i*i <= a; i++)
    {
        if (a % i  == 0)
        {
          return 0;
        }
    }
     return 1;
}
int main(){
 int a;
 printf("Enter num: ");
 scanf("%d",&a);
if (isprime(a))
{
    printf("Prime");
}
else{
    printf("Not Prime");
}

return 0;
}