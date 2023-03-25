#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    switch (year % 4)
    {
    case 0:
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                printf("%d is a leap year", year);
            else
                printf("%d is not a leap year", year);
        }
        else
            printf("%d is a leap year", year);
        break;
    default:
        printf("%d is not a leap year", year);
    }

    return 0;
}
