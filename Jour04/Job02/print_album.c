#include "../include/headers.h"



int main() {
    t_album *album;
    album->title = "Plastic Love"; 
    album->artist = "Takeuchi Mariya";
    album->year = 1984;
    print_album(album);
    return 0;
}



void print_album(t_album *album) {
    printf("'%s' by '%s' released in %d", album->title, album->artist, album->year);
}