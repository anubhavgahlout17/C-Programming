#include<stdio.h>                       //Arrays of structure
struct student
{   
     char name[20];
     int rollNo;
     int marks[2];
};

int main(){
    struct student s[3];
    for (int i = 0; i < 3; i++)     
    {
        printf("Enter Student Name: ");
        scanf("%s",s[i].name);
        
        printf("Enter Student Roll No: ");
        scanf("%d",&s[i].rollNo);
        

         printf("Enter Physics Marks: ");
        scanf("%d",&s[i].marks[0]);

        printf("Enter Chemistry Marks: ");
        scanf("%d",&s[i].marks[1]);
        printf("\n");   
    }
        for (int i = 0; i < 3; i++)
        {
            printf("Student Name: %s\n",s[i].name);
            printf("Student roll no.: %d\n",s[i].rollNo);
            printf("Physics marks: %d\n",s[i].marks[0]);
            printf("Chemistry marks: %d\n",s[i].marks[1]);
            printf("\n");
        }
    return 0;
    }




