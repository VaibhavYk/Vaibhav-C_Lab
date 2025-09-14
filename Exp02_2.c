// WAP a C program to Convert temperature from Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32.

#include <stdio.h>
int main()
{
    int c, F;
    printf("Enter temprature in Celsius: ");
    scanf("%d", &c);

    F = (c*9/5) + 32;

    printf("Temprature in Fahrenheit: %d", F);

    return 0;

}
