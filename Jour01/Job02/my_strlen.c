#include <stdio.h>


int my_strlen(char *str);



int main() {
    char *str = "My string";
    printf("%d", my_strlen(str));
    return 0;
}


int my_strlen(char *str) {
    int i = 0;

    while(*str != '\0') {
        *str++;
        i++;
    }

    return i;
}