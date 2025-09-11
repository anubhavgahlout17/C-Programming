#include <stdio.h>

int main()                                // CALCULATOR
{
    int value1;
    int value2;
    int calculator;
    char choice;
    do{
    printf("Enter Value 1: ");
    scanf("%d", &value1);

    printf("Enter Value 2: ");
    scanf("%d", &value2);

    printf("Enter 1 For Additon\n");
    printf("Enter 2 For Subtraction\n");
    printf("Enter 3 For Muliplication\n");
    printf("Enter 4 For Divide\n");
    printf("Enter 5 For Reminder Check\n");
    printf("Enter 6 for Exit\n");
    scanf("%d", &calculator);
    

        switch (calculator)
        {
        case 1:
            printf("%d + %d = %d\n", value1, value2, value1 + value2);

            break;

        case 2:
            printf("%d - %d = %d\n", value1, value2, value1 - value2);
            break;

        case 3:
            printf("%d X %d = %d\n", value1, value2, value1 * value2);
            break;

        case 4:
            printf("%d/%d = %d\n", value1, value2, value1 / value2);
            break;

        case 5:
            printf("%d and %d Reminder =  %d\n", value1, value2, value1 % value2);
            break;
        case 6:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
        }
        printf("\nDo you want to continue? yes(Y) or No(N)");
        scanf(" %c", &choice);

    } while (choice == 'Y' || choice == 'y');
    printf("program Ended.\n");

    return 0;
}