/*
Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/

#include <stdio.h>

int main()
{

    double operand1, operand2, result;

    char selection;

    printf("Menu:\n");
    printf("a. Addition\n");
    printf("b. Subtraction\n");
    printf("c. Multiplication\n");
    printf("d. Division\n");
    printf("e. Exit\n");
    printf("Enter a selection: ");
    scanf(" %c", &selection);

    switch (selection)
    {
    case 'a':
        printf("Enter the first operand: ");
        scanf("%lf", &operand1);
        printf("Enter the second operand: ");
        scanf("%lf", &operand2);
        result = operand1 + operand2;

        printf("Result: %lf\n", result);
        break;
    case 'b':
        printf("Enter the first operand: ");
        scanf("%lf", &operand1);
        printf("Enter the second operand: ");
        scanf("%lf", &operand2);
        result = operand1 - operand2;

        printf("Result: %lf\n", result);
        break;
    case 'c':
        printf("Enter the first operand: ");
        scanf("%lf", &operand1);
        printf("Enter the second operand: ");
        scanf("%lf", &operand2);

        result = operand1 * operand2;

        printf("Result: %lf\n", result);
        break;
    case 'd':
        printf("Enter the first operand: ");
        scanf("%lf", &operand1);
        printf("Enter the second operand: ");
        scanf("%lf", &operand2);

        result = operand1 / operand2;
        printf("Result: %lf\n", result);
        break;
    case 'e':

        return 0;
    default:
        printf("Invalid selection\n");
    }

    return 0;
}