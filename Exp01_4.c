//Write a C program to add two numbers, take number from user.

#include <stdio.h>
int main()
{
    // a-first number b-seconde number s-sum of the numbers
    int a, b, s;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);

    s=a+b;

    printf("Sum of numbers:%d", s);
    return 0;

}

