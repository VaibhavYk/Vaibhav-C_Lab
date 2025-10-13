#include <stdio.h>
void counterFunction() {
    static int count = 0;  
    int normalVar = 0;  

    count++;
    normalVar++; 

    printf("Static variable (count): %d\n", count);
    printf("Normal variable (normalVar): %d\n\n", normalVar);
}

int main() {
    printf("First call:\n");
    counterFunction();

    printf("Second call:\n");
    counterFunction();

    printf("Third call:\n");
    counterFunction();

    return 0;
}
