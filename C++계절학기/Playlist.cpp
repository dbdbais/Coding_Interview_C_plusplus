#include "Playlist.h"
#include<iostream>

using namespace std;

void Playlist::addSong(std::string name, std::string artist) {
    Song tmp(name,artist);
    songList->addNode(tmp);

}
void Playlist::removeSong(Song song) {
    songList->removeNode(song);
}

void Playlist::printPlaylist() {
    cout<<"Playlist:"<<endl;
    songList->printList();
}

