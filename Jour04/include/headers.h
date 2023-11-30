#ifndef HEADERS_H
#define HEADERS_H

#include <stdio.h>
#include <stdlib.h>



typedef struct {
    unsigned int x;
    unsigned int y;
}point;

typedef struct {
    char *artist, *title;
    int year;
}t_album;

typedef struct {
    char *artist;
    char *title;
    int year;
    struct t_album_list *next;
}t_album_list;


int manhattan(point a, point b);

void print_album(t_album *album);

t_album *realloc_album(t_album *albums, int size, int newsize);

void create_album(char *artist, char *title, int year);

void push_back(t_album_list *list, t_album_list *album);



#endif