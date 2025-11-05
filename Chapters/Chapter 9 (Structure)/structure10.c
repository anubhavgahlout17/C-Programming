#include<stdio.h>                      //Que: Enter Address(house no, block,city,state)
#include<string.h>
struct address{
    int house_no;
    int block;
    char city[50];
    char state[50];
};
int main(){
    struct address a1,a2,a3,a4,a5;
    a1.house_no = 101;
    a1.block = 121;
    strcpy(a1.city,"Dehradun");
    strcpy(a1.state,"Uttarakhand");

    a2.house_no = 102;
    a2.block = 122;
    strcpy(a2.city,"Jaspur");
    strcpy(a2.state,"Uttarakhand");

    a3.house_no = 103;
    a3.block = 123;
    strcpy(a3.city,"Kashipur");
    strcpy(a3.state,"Uttarakhand");

    a4.house_no = 104;
    a4.block = 124;
    strcpy(a4.city,"Haldwani");
    strcpy(a4.state,"Uttarakhand");

    a5.house_no = 105;
    a5.block = 125;
    strcpy(a5.city,"Rudarpur");
    strcpy(a5.state,"Uttarakhand");

    printf("People 1\nHouse No.: %d\nBlock: %d\nCity: %s\nState: %s\n",a1.house_no,a1.block,a1.city,a1.state);
    printf("\n");
     printf("People 2\nHouse No.: %d\nBlock: %d\nCity: %s\nState: %s\n",a2.house_no,a2.block,a2.city,a2.state);
    printf("\n");
     printf("People 3\nHouse No.: %d\nBlock: %d\nCity: %s\nState: %s\n",a3.house_no,a3.block,a3.city,a3.state);
    printf("\n");
     printf("People 4\nHouse No.: %d\nBlock: %d\nCity: %s\nState: %s\n",a4.house_no,a4.block,a4.city,a4.state);
    printf("\n");
    printf("People 5\nHouse No.: %d\nBlock: %d\nCity: %s\nState: %s\n",a5.house_no,a5.block,a5.city,a5.state);

    return 0;

}