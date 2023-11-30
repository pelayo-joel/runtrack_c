#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int factorial(int n);

int strlength(char *str);

int my_atoi(char *str);

int n_digits(int n);

char *my_itoa(int n);



int main(int argc, char *argv[]) {
    if (argc != 2) { return 0; }

    int cli_arg = my_atoi(argv[1]);
    int fact = factorial(cli_arg);
    char *result = my_itoa(fact);
    printf("%s", result);

    return 0;
}



int factorial(int n) {
    int count = n - 1;
    
    while(count > 1) {
        n *= count;
        count--; 
    }
    return n;
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