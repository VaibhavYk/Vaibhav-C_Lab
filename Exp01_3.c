//Write a program that prompts the user to enter their name and age.

#include <stdio.h>
int main()
{
    //N-Name A-Age
    char N;
    int A;
    printf("Enter your name: ");
    scanf("%s", &N);
    printf("Enter your age: ");
    scanf("%d", &A);
    
    printf("Your name is %s and you are %d years old");
    return 0;

}

