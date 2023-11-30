#include <stdio.h>


int char_is_digit(char c) {
    int ascii_value = (int) c;
    if(ascii_value >= 48 && ascii_value <= 57) {
        return 1;
    }
    return 0;
}



int main() {
    char char_test_one = 'c';
    char char_test_two = '2';
    printf("%d", char_is_digit(char_test_one));
    printf("%d", char_is_digit(char_test_two));
    return 0;
}