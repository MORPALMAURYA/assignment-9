// Check whether a given set of three numbers are lengths of an isosceles
// triangle or not
//  Check whether a given set of three numbers are lengths of sides of a right
// angled triangle or not
//  Check whether a given set of three numbers are equilateral triangle or not
//  Exit

#include <stdio.h>
#include <math.h>

int main()
{

    int side1, side2, side3;

    char selection;

    printf("Menu:\n");
    printf("a. Check isosceles triangle\n");
    printf("b. Check right-angled triangle\n");
    printf("c. Check equilateral triangle\n");
    printf("d. Exit\n");
    printf("Enter a selection: ");
    scanf(" %c", &selection);

    switch (selection)
    {
    case 'a':

        printf("Enter the lengths of the sides of the triangle: ");
        scanf("%d %d %d", &side1, &side2, &side3);

        if (side1 == side2 || side1 == side3 || side2 == side3)
        {
            printf("The triangle is isosceles.\n");
        }
        else
        {
            printf("The triangle is not isosceles.\n");
        }
        break;
    case 'b':

        printf("Enter the lengths of the sides of the triangle: ");
        scanf("%d %d %d", &side1, &side2, &side3);

        if (side1 * side1 + side2 * side2 == side3 * side3 ||
            side1 * side1 + side3 * side3 == side2 * side2 ||
            side2 * side2 + side3 * side3 == side1 * side1)
        {
            printf("The triangle is right-angled.\n");
        }
        else
        {
            printf("The triangle is not right-angled.\n");
        }
        break;
    case 'c':

        printf("Enter the lengths of the sides of the triangle: ");
        scanf("%d %d %d", &side1, &side2, &side3);

        if (side1 == side2 && side1 == side3)
        {
            printf("The triangle is equilateral.\n");
        }
        else
        {
            printf("The triangle is not equilateral.\n");
        }
        break;
    case 'd':
        return 0;
    default:
        printf("Invalid selection\n");
    }

    return 0;
}