#include <stdio.h>

int main()
{
    float units, bill;

    printf("Enter the number of units consumed: ");
    scanf("%f", &units);

    switch ((int)units / 50)
    {
    case 0:
        bill = units * 0.50;
        break;
    case 1:
        bill = 25 + (units - 50) * 0.75;
        break;
    case 2:
        bill = 100 + (units - 150) * 1.20;
        break;
    default:
        bill = 220 + (units - 250) * 1.50;
        break;
    }

    bill *= 1.2; // Add 20% surcharge

    printf("Total electricity bill is Rs. %.2f", bill);

    return 0;
}
