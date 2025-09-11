#include<stdio.h>
                                 
void value(int *a);
void value(int *a){
    *a = 100;
}

int main(){
    int num = 50; 
    printf("%d\n",num);
    value(&num);             // call byy reference
    printf("%d\n",num);
    return 0;

    
}
