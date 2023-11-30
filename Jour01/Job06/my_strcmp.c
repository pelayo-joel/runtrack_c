#include <stdio.h>



int my_strcmp(char *s1, char *s2);



int main() {
    char *test_one = "Hello";
    char *test_two = "Hello";
    printf("%d", my_strcmp(test_one, test_two));
    return 0;
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