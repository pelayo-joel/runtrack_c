#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


char *trim(char *src);



int main() {
    char *string_src = "  Hello  ";
    char *string_dest = trim(string_src);
    write(1, string_dest, strlen(string_dest));
    return 0;
}



char *trim(char *src) {
    char *dest = malloc(sizeof(char) * 100);

    int start_i = 0;
    int end_i = strlen(src) - 1;
    while(src[start_i] == ' ') {
        start_i++;
    }

    while(src[end_i] == ' ' || src[end_i] == '\0') {
        end_i--;
    }

    for(int i = start_i, j = 0; i <= end_i; i++, j++) {
        dest[j] = src[i];
    }
    
    return dest;
}