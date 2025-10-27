#include <stdio.h>
void modifyValues(int *ip, float *fp, char *cp) {
    *ip = *ip + 5;      
    *fp = *fp * 2;      
    *cp = 'Z';
}

int main() {
    int i = 10;
    float f = 3.5;
    char c = 'A';

    printf("Before function call: i = %d, f = %.2f, c = %c\n", i, f, c);
    modifyValues(&i, &f, &c);

    printf("After function call: i = %d, f = %.2f, c = %c\n", i, f, c);

    return 0;
}
