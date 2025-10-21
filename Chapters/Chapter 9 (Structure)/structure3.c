#include <stdio.h>
#include <string.h>

struct student
{
    int rollNo;
    float marks[3];
    char str[26];
};

int main() {
    struct student s1;

    s1.rollNo = 20;
    s1.marks[0] = 25.0;
    s1.marks[1] = 26.8;
    s1.marks[2] = 28.9;

    strcpy(s1.str, "Anubhav");

    for (int i = 0; i < 3; i++) {
        printf("Marks %d: %f\n", i+1, s1.marks[i]);
    }

    printf("Name: %s\n", s1.str);

    return 0;
}
