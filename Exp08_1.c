#include <stdio.h>
int main() 
{
    int i = 15;
    float f = 1.14;
    char c = 'A';

    int *zz = &i;
    float *xx = &f;
    char *yy = &c;

    printf("Address stored in ip: %p\n", (void*)zz);
    printf("Address stored in fp: %p\n", (void*)xx);
    printf("Address stored in cp: %p\n", (void*)yy);

    printf("Value pointed by ip: %d\n", *zz);
    printf("Value pointed by fp: %.2f\n", *xx);
    printf("Value pointed by cp: %c\n", *yy);

    printf("Value of i: %d\n", i);
    printf("Value of f: %.2f\n", f);
    printf("Value of c: %c\n", c);

    return 0;
}
