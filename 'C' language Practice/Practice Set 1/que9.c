#include<stdio.h>
#include<math.h>

double sum(int a);

double sum(int a){
return sqrt(a);                          //To find square root of  a nuber

}

int main(){
    int a = 25;
    double result = sum(a);
    printf("Square root of %d is %f\n",a, result);
    return 0;
}


