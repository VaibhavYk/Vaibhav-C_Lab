#include <stdio.h>
int globalVar = 10;
void testFunction() {
    int localVar = 5; 
    printf("Inside testFunction:\n");
    printf("Local variable = %d\n", localVar);
    printf("Global variable = %d\n", globalVar);
}

int main() {
    testFunction();
    printf("\nIn main function:\n");
    printf("Global variable = %d\n", globalVar);

    return 0;
}
