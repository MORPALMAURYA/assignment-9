#include <stdio.h>

int main()
{
    float num, result;
    int choice;

    printf("Enter a number: ");
    scanf("%f", &num);

    printf("Enter your choice:\n");
    printf("1. Convert positive to negative\n");
    printf("2. Convert negative to positive\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        result = -num;
        printf("%.2f converted to negative is %.2f", num, result);
        break;
    case 2:
        result = -num;
        printf("%.2f converted to positive is %.2f", num, result);
        break;
    default:
        printf("Invalid choice");
        break;
    }

    return 0;
}
