#ifndef SUMMER_PLAYLIST_H
#define SUMMER_PLAYLIST_H
#include "SinglyLinkedList.h"

class Playlist {
public:
    Playlist() : songList(new SinglyLinkedList()) {}

    void addSong(std::string name, std::string artist);
    void removeSong(Song song);
    void printPlaylist();

private:
    SinglyLinkedList* songList;
};

#endif //SUMMER_PLAYLIST_H
