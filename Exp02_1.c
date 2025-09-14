// WAP a C program to calculate the area and perimeter of a rectangle based on its length and width.

#include <stdio.h>
int main()
{
    int a, p, l, b;
    printf("Enter the Length: ");
    scanf("%d", &l);
    printf("Enter the Width: ");
    scanf("%d", &b);

    a = l * b;
    p = 2 * (l + b);

    printf("Area of the rectangle is %d and its Perimeter is %d", a, p);

    return 0;
}