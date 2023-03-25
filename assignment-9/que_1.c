
/* 1. Write a program which takes the month number as an input and display number of
days in that month.*/

#include <stdio.h>

int main()
{

    int month;
    printf("Enter the month number: ");
    scanf("%d", &month);

    switch (month)
    {
    case 2:
        printf("28 days\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 days\n");
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 days\n");
        break;
    default:
        printf("Invalid month number\n");
    }

    return 0;
}