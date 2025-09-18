#include <stdio.h>                                 //print name and check its length
void name(char arr[]);
int count_length(char arr[]);

void name(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}
int count_length(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count-1;
}

int main()
{
    char name[100];
    fgets(name, 100, stdin);
    printf("Length is: %d\n",count_length(name));
    return 0;
}