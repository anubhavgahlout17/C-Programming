#include<stdio.h>                           //Que
int main(){
    FILE *fptr;
    fptr = fopen("New.txt","w");
    
    int n;
    printf("Enter Num: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
          if (i % 2 != 0 )
          {
            fprintf(fptr,"%d\n",i);
          }
           
    }


    fclose(fptr);
    return 0;
}