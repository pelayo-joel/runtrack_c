#include <stdio.h>
#include <stdlib.h>


int array_length(char **strs);

int my_strcmp(char *str1, char *str2);

char **sort(char **strs);



int main() {
    char* array_init[] = {"toto", "aller", "courir", "boire", "faire", NULL};
    int array_len = array_length(array_init);

    for(int i = 0; i < array_len; i++) {
        printf("Original string at %d: %s\n", i, array_init[i]);
    }

    char **sorted = sort(array_init);
    int sorted_len = array_length(sorted);
    for(int i = 0; i < sorted_len; i++) {
        printf("New string at %d: %s\n", i, sorted[i]);
    }

    return 0;
}



char **sort(char **strs) {
    int i, j;
    int strs_len = array_length(strs);
    
    for (i = 0; i < strs_len - 1; i++) {
        for (j = 0; j < strs_len - i - 1; j++) {
            if (my_strcmp(strs[j], strs[j + 1]) == 1) {
                char *tmp = strs[j];
                strs[j] = strs[j + 1];
                strs[j + 1] = tmp;
                break;
            }
        }
    }

    return strs;
}


int my_strcmp(char *s1, char *s2) {
    while(*s1 != '\0' || *s2 != '\0') {
        if ((*s1 != *s2) && ((int) *s1 < (int) *s2)) {
            return -1;
        }
        else if ((*s1 != *s2) && ((int) *s2 < (int) *s1)) {
            return 1;
        }

        *s1++;
        *s2++;
    }

    return 0;
}


int array_length(char **strs) {
    int length = 0;
    while (strs[length] != NULL) {
        length++;
    }

    return length;
}