#include <stdio.h>                   //String

void print_string(char arr[]);
void print_string(char arr[])
{
    printf("%s", arr);
}
int main()
{
    char first_name[] = "Anubhav";
    char last_name[] = "Gahlout";
    print_string(first_name);
    print_string(last_name);
    return 0;
}