// C program to find all roots of a quadratic equation using switch case

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, discriminant, root1, root2, realPart, imaginaryPart;
    int choice;

    printf("Enter the coefficients of the quadratic equation: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    switch (discriminant > 0)
    {
    case 1:
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots of the quadratic equation are %.2f and %.2f", root1, root2);
        break;
    case 0:
        switch (discriminant == 0)
        {
        case 1:
            root1 = root2 = -b / (2 * a);
            printf("The roots of the quadratic equation are %.2f and %.2f", root1, root2);
            break;
        case 0:
            realPart = -b / (2 * a);
            imaginaryPart = sqrt(-discriminant) / (2 * a);
            printf("The roots of the quadratic equation are %.2f + %.2fi and %.2f - %.2fi", realPart, imaginaryPart, realPart, imaginaryPart);
            break;
        }
        break;
    }

    return 0;
}
