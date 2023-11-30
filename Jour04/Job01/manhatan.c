#include "../include/headers.h"



int main() {
    point i, j;
    i.x = 10, i.y = 2;
    j.x = 2, j.y = 5;

    printf("%d", manhattan(i, j));
    return 0;
}


int manhattan(point a, point b) {
    return (a.x - b.x) + (a.y - b.y);
}