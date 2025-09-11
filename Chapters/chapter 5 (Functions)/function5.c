#include<stdio.h>
#include<math.h>

int areaofsquare(int s);
float areaofcircle(int c);
int areaofrectangle(int a,int b);

int areaofsquare(int s){
    return (int)pow(s,2);
}
float areaofcircle(int c){
    return 3.14*pow(c,2);
}
int areaofrectangle(int a,int b){
   return a*b; 
}
int main(){
    int s = 4;
    int x = areaofsquare(s);
    printf("Area of Sqare is: %d\n", x);

    int c = 6.0;
    float y = areaofcircle(c);
    printf("Area of Circle is: %f\n", y);

    int a = 8, b = 12;
    int z = areaofrectangle(a,b);
    printf("Area of Rectangle is: %d\n", z);

    return 0;
}