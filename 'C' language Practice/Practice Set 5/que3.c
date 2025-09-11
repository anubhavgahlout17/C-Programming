#include<stdio.h>
int main(){
int maximum[] = {12,45,67,54,6,65,44,1,444};
int max = maximum[0];

for(int i = 1; i < 9; i++){
    if(maximum[i] > max){
        max = maximum[i];
    }
    
}
printf("%d is maximum no.", max);

return 0;

}