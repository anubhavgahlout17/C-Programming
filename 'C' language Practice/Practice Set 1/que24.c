#include<stdio.h>
 int main(){

int arr[6] = {{10},{20},{30},{40},{50},{60}};
int *ptr = &arr;

for(int i = 0; i<6;i++){
    printf("%d\n",*(ptr+i));     // pointer arithmetic

}

return 0;

 }



