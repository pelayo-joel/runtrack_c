#include <stdio.h>


void swap(int *a, int *b);



int main() {
    int a = 3;
    int b = 6;

    printf("%i", a);
    swap(&a, &b);
    printf("%i", a);

    return 0;
}



void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    b = &tmp;
}