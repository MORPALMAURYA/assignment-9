/*. Write a program which takes the day number of a week and displays a unique
greeting message for the day*/

#include <stdio.h>

int main()
{

    int day;

    printf("Enter the day number (1-7): ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Hello, it's Monday!\n");
        break;
    case 2:
        printf("Hello, it's Tuesday!\n");
        break;
    case 3:
        printf("Hello, it's Wednesday!\n");
        break;
    case 4:
        printf("Hello, it's Thursday!\n");
        break;
    case 5:
        printf("Hello, it's Friday!\n");
        break;
    case 6:
        printf("Hello, it's Saturday!\n");
        break;
    case 7:
        printf("Hello, it's Sunday!\n");
        break;
    default:
        printf("Invalid day number\n");
    }

    return 0;
}