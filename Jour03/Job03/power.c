#include <stdio.h>


int power(int n, int pow);



int main() {
    int base = 3;
    printf("%d", power(base, 2));
    return 0;
}



int power(int n, int pow) {
    if(pow != 0) {
        return n * power(n, pow - 1);
    }
    return 1;
}