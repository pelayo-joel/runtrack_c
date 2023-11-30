#include <stdio.h>


int char_is_digit(char c);

int str_is_digit(char *str);



int main() {
    char *string_test_one = "Hello world!";
    char *string_test_two = "Hello 2 the world!";
    printf("%d", str_is_digit(string_test_one));
    printf("%d", str_is_digit(string_test_two));
    return 0;
}



int str_is_digit(char *str) {
    while(*str != '\0') {
        if (char_is_digit(*str) == 1) {
            return 1;
        }
        *str++;
    }
    return 0;
}


int char_is_digit(char c) {
    int ascii_value = (int) c;
    if(ascii_value >= 48 && ascii_value <= 57) {
        return 1;
    }
    return 0;
}