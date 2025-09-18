#include<stdio.h>               //Grade system
int main(){
    int marks;
    printf("Enter Obtain Marks: ");
    scanf("%d", &marks);
    if (marks < 0 || marks > 100)
    {
        printf("Invalid Marks\n");
    }
    
    else if (marks > 95)
    {
        printf("Grade A+");
    }
    else if (marks > 90)
    {
        printf("Grade A");
    }
    else if(marks > 80){
        printf("Grade B");
    }
    else if (marks > 70)
    {
        printf("Grade C");
    }
    
else if (marks >=33)
{
   printf("Grade D");
}
else{
    printf("Fail");
}
    return 0;
    
}