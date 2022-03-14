
#include<stdio.h>
int main() {
    int intType;
    unsigned int d[2];
    unsigned long l;
    float floatType;
    double doubleType;
    char charType;

    // sizeof evaluates the size of a variable
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of unsigned int d[2]: %zu bytes\n", sizeof(d[2]));
    printf("Size of unsigned long l : %zu bytes\n", sizeof(l));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));

    return 0;
}
