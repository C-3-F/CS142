//
// Created by c3far on 12/8/2021.
//

#include "Playlist.h"

Playlist::Playlist() {
    playlistName = "No Name";
}

Playlist::Playlist(string name) {
    playlistName = name;
}

void Playlist::AddSong(Song *song) {
    songs.push_back(song);
}

void Playlist::PlayPlaylist() {
    for (int i = 0; i < songs.size(); i++) {
        cout << songs.at(i)->GetFirstLine() << endl;
        songs.at(i)->increaseCount();
    }
}

vector<Song *> Playlist::GetSongs() {
    return songs;
}

string Playlist::GetName() {
    return playlistName;
}

void Playlist::RemoveSong(int index) {
    songs.erase(songs.begin() + index);
}