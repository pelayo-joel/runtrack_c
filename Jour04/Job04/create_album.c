#include "../include/headers.h"



int main() {

}



void create_album(char *artist, char *title, int year) {
    t_album_list new_album;
    new_album.artist = artist;
    new_album.title = title;
    new_album.year = year;

    new_album.next = NULL;

}