#include<stdio.h>                 // call by Reference
void call_by_reference(int *a,int b);
void call_by_reference(int *a, int b){
     *a = 2;
                        
}
int main(){
    int a = 7, b = 8;
   call_by_reference(&a,b);
   printf("%d and %d\n", a,b);

    return 0;


}