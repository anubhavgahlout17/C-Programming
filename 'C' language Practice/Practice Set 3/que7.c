#include<stdio.h>

int fact(int a);
int fact(int a){
   for(int i = 1; i<=a; i++){
      if(a == 0){
         return 1;
      }

   else{
      return a*fact(a-1);
   }
     
   }

  
}


int main(){
   int a;
   printf("enter a number: ");
   scanf("%d", &a);
   int result = fact(a);
   printf("facotrial of %d is %d\n", a, result);

   return 0;
}