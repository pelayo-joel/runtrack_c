#include "headers.h"



int main() {
    char ch = 'c';
    my_putchar(ch);
    return 0;
}


void my_putchar(char c) {
    write(1, &c, 1);
}