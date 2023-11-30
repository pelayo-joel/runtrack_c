#include <stdio.h>


int strlength(char *str);

int my_atoi(char *str);



int main() {
    char *str_test = "32";
    printf("%d", my_atoi(str_test));
    return 0;
}



int my_atoi(char *str) {
    int result = 0, tens = 1, str_len = strlength(str) - 1;

    for(int i = str_len; i >= 0; i--) {
        result += (int) (str[i] - 48) * tens;
        tens *= 10;
    }

    return result;
}


int strlength(char *str) {
    int length = 0;
    char *copy = str;

    while(*copy != '\0') {
        length++;
        *copy++;
    }

    return length;
}