#include "../include/headers.h"



int main() {
    return 0;
}



t_album *realloc_album(t_album *albums, int size, int newsize) {
    t_album *new_albums = malloc(sizeof *albums * newsize);
    for(int i = 0; i < size; i++) {
        new_albums[i] = albums[i];
    }

    free(albums);
    return new_albums;
}