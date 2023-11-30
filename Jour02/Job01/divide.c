#include <stdio.h>


void divide(int *value);



int main() {
    int value = 4;
    divide(&value);

    printf("%d", value);
    return 0;
}



void divide(int *value) {
    int divider = 2; 
    *value /= divider;
}