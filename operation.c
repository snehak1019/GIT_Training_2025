#include "operation.h"
#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int diff(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int div(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0; // Default value
    }
    return a / b;
}

int mod(int a, int b) {
    if (b == 0) {
        printf("Error: Modulo by zero is not allowed.\n");
        return 0; // Default value
    }
    return a % b;
}