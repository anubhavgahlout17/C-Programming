#include<stdio.h>                          ////count length withour strlen

// void printstr(char arr[]);
int count(char arr[]);

// void printstr(char arr[]){
//     for(int i = 0; arr[i] != '\0'; i++){
//         printf("%c", arr[i]);
//     }
//     printf("\n");
// }
int count(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        count++;
        
    }
    return count;
}
int main(){
char name[50] = "Anubhavg";
 
printf("%d",count(name));
return 0;


}