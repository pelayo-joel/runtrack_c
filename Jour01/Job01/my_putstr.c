#include "headers.h"



int main() {
    char *str = "str";
    my_putstr(str);
    return 0;
}



void my_putstr(char *str) {
    while (*str != '\0')
    {
        my_putchar(*str);
        *str++;
    }
    
}


void my_putchar(char c) {
    write(1, &c, 1);
}