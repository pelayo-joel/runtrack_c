#include <stdio.h>


int my_sqrt(int n);



int main() {
    int base = 9;
    printf("%d", my_sqrt(base));
    return 0;
}



int my_sqrt(int n) {
    if (n == 0 || n == 1)
        return n;
 
    int i = 1, result = 1;
    while (result <= n) {
        i++;
        result = i * i;
    }
    return i - 1;
}