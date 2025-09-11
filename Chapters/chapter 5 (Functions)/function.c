#include<stdio.h>

void good_morning();          //function decleration
void good_bye();

void good_morning(){                    // function defination
    printf("good morning\n");

   
}
void good_bye(){
    printf("good bye\n");
   
}

int main(){                //function call
    good_morning();
    good_bye();
    return 0;
}

