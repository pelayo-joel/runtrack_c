#include <stdio.h>
#include <stdlib.h>


int n_digits(int n);

char *my_itoa(int n);



int main() {
    int int_test = 32;
    printf("%s", my_itoa(int_test));
    return 0;
}



char *my_itoa(int n) {
    int digits = n_digits(n);
    int i = digits - 1;

    char *result = malloc(sizeof(char) * digits);

    while(i >= 0) {
        result[i] = (n % 10) + '0';
        n /= 10;
        i--;
    }
    result[digits] = '\0';

    return result;
}


int n_digits(int n) {
    int r = 1;
    //if (n < 0) n = (n == INT_MIN) ? INT_MAX: -n;
    while (n > 9) {
        n /= 10;
        r++;
    }
    return r;
}