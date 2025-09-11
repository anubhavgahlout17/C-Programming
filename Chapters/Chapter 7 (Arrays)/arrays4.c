// 2D ARRAY

#include<stdio.h>

int main(){
    // que. 2 student 3 subject marks store
    int marks[2][3];    // _ _ _ || _ _ _  

    // first student marks
    marks[0][0]= 90;
    marks[0][1]= 79;
    marks[0][2]= 85;

   // second student mrks

marks[1][0]= 80;
marks[1][1]= 70;
marks[1][2]= 75;

printf("first student Hindi marks: %d\n", marks[0][0]);
printf("first student English marks: %d\n", marks[0][1]);
printf("first student Science marks: %d\n", marks[0][2]);

printf("Second student Hindi marks: %d\n", marks[1][0]);
printf("Second student English marks: %d\n", marks[1][1]);
printf("Second student Science marks: %d\n", marks[1][2]);

return 0;



}