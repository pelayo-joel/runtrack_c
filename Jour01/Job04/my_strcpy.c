#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


char *my_strcpy(char *dest, char *src);



int main() {
    char *string_src = "Hello world!";
    char *string_dest = malloc(sizeof(char) * strlen(string_src));

    write(1, my_strcpy(string_dest, string_src), strlen(string_dest));

    return 0;
}



char *my_strcpy(char *dest, char *src) {
    char *string_start = dest;

    while(*src != '\0') {
        *dest = *src;
        *src++;
        *dest++;
    }

    return string_start;
}