#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int array_length(char **strs);

void delete_str_array(char ***strs);



int main() {
    char* array_init[] = {"toto", "aller", "courir", "boire", "faire", NULL};
    int array_len = array_length(array_init);

    for(int i = 0; i < array_len; i++) {
        printf("Original string at %d: %s\n", i, array_init[i]);
    }

    delete_str_array(array_init);
    // for(int i = 0; i < array_len; i++) {
    //     printf("New string at %d: %s\n", i, array_init[i]);
    // }

    return 0;
}



void delete_str_array(char ***strs) {
    int strs_len = array_length(strs);
    for(int i = 0; i <= strs_len; i++) {
        fun(strs[i]);
    }
}


int array_length(char **strs) {
    int length = 0;
    while (strs[length] != NULL) {
        length++;
    }

    return length;
}