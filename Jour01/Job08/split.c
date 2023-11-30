#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


char **split(char *src);



int main() {
    
    return 0;
}



char **split(char *src) {
    char **result = malloc();

    int i = 0;
    while(src[i] != '\0') {
        while(src[i] != ' ') {
            
        }
        i++;
    }

    return result;
}