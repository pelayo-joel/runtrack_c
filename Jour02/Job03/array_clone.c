#include <stdio.h>
#include <stdlib.h>


char **array_clone(char **strs, int n);



int main() {
    int arr_length = 20;
    char **array_init = malloc(sizeof *array_init * arr_length);
    // // for (int i = 0; i < arr_length; i++) {
    // //     *array_init = "Bro";
    // // }

    array_init[0] = "Bro";
    array_init[1] = "Damn";
    array_init[2] = "HAHA";
    array_init[3] = "IDK";

    char** clone = array_clone(array_init, 2);
    for(int i = 0; i < 2; i++) {
        printf("String at index %i: %s\n", i, clone[i]);
    }
    return 0;
}



char **array_clone(char **strs, int n) {
    char **clone = malloc(sizeof(*strs) * n);

    int i, j = 0; 0;
    while (i < n) {    
        clone[i] = malloc(sizeof(char) * sizeof *strs);
        while (strs[i][j] != '\0') {
            clone[i][j] = strs[i][j];
            j++;
        }
        i++;
        j = 0;
    }
    clone[i] = NULL;

    return clone;
}