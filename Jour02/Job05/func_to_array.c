#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int array_length(char **strs);

void strtowrite(char *strs);

void func_to_array(char **strs, void (*fun)(char*));



int main() {
    char* array_init[] = {"toto", "aller", "courir", "boire", "faire", NULL};
    int array_len = array_length(array_init);

    for(int i = 0; i < array_len; i++) {
        printf("Original string at %d: %s\n", i, array_init[i]);
    }

    func_to_array(array_init, strtowrite);

    return 0;
}



void func_to_array(char **strs, void (*fun)(char*)) {
    int strs_len = array_length(strs);
    for(int i = 0; i <= strs_len; i++) {
        fun(strs[i]);
    }
}


void strtowrite(char *strs) {
    write(1, strs, sizeof(strs));
}


int array_length(char **strs) {
    int length = 0;
    while (strs[length] != NULL) {
        length++;
    }

    return length;
}