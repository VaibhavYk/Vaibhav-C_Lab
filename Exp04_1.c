#include <stdio.h>
int count = 0;
void increment() {
    count++;
    printf("Count after increment: %d\n", count);
}
void decrement() {
    count--;
    printf("Count after decrement: %d\n", count);
}
void display() {
    printf("Current count: %d\n", count);
}

int main() {
    printf("Initial count: %d\n", count);
    increment();
    increment();
    decrement();
    display();
    
    return 0;
}
