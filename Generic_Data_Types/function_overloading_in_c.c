#include <stdio.h>

// Function to add two integers
int add_int(int a, int b) {
    return a + b;
}

// Function to add two doubles
double add_double(double a, double b) {
    return a + b;
}

// Overloaded function using _Generic
#define add(a, b) _Generic((a) + (b), \
                            int: add_int, \
                            double: add_double) (a, b)

int main() {
    int x = 5, y = 3;
    double d1 = 3.5, d2 = 2.5;

    printf("Sum of integers: %d\n", add(x, y));
    printf("Sum of doubles: %.2f\n", add(d1, d2));

    return 0;
}

