#include <stdio.h>

int main() 
{
    int arr_int[3] = {10, 20, 30};
    float arr_float[3] = {1.1, 2.2, 3.3};
    char arr_char[3] = {'A', 'B', 'C'};

    int *ip = arr_int;
    float *fp = arr_float;
    char *cp = arr_char;

    printf("Initial int* address: %p, value: %d\n", (void*)ip, *ip);
    printf("Initial float* address: %p, value: %.2f\n", (void*)fp, *fp);
    printf("Initial char* address: %p, value: %c\n", (void*)cp, *cp);

    ip++;
    fp++;
    cp++;

    printf("After increment - int* address: %p, value: %d\n", (void*)ip, *ip);
    printf("After increment - float* address: %p, value: %.2f\n", (void*)fp, *fp);
    printf("After increment - char* address: %p, value: %c\n", (void*)cp, *cp);

    ip--;
    fp--;
    cp--;

    printf("After decrement - int* address: %p, value: %d\n", (void*)ip, *ip);
    printf("After decrement - float* address: %p, value: %.2f\n", (void*)fp, *fp);
    printf("After decrement - char* address: %p, value: %c\n", (void*)cp, *cp);

    return 0;
}
