#include <stdio.h>

int main() {
    int years = 10;
    float population = 100000;
    int i;

    printf("Year\tPopulation\n");
    for(i = 1; i <= years; ++i) {
        population = population * 1.10;
        printf("%2d\t%.0f\n", i, population);
    }

    return 0;
}
