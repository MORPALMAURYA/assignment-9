// Program to Convert even number into its upper nearest odd number Switch
// Statement.

#include <stdio.h>

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch (num % 2)
    {
    case 0:
        result = num + 1;
        printf("%d converted to nearest odd number is %d", num, result);
        break;
    case 1:
        printf("%d is already an odd number", num);
        break;
    }

    return 0;
}
