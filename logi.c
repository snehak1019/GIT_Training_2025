#include<stdio.h>

int logical_and(int a, int b) {
    return a && b; 
}

int logical_or(int a, int b) {
    return a || b; // Returns 1 if either is non-zero, otherwise 0
}

int logical_not(int a) {
    return !a; // Returns 1 if a is 0, otherwise 0
}

