#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


char *my_strdup(char *src);



int main() {
    char *string_src = "Hello world!";
    char *string_dest = my_strdup(string_src);

    write(1, string_dest, strlen(string_src));

    return 0;
}



char *my_strdup(char *src) {
    char *string_dest = malloc(sizeof(char) * sizeof(src));

    int i = 0;
    while(*src != '\0') {
        string_dest[i] = *src;
        *src++;
        i++;
    }

    return string_dest;
}