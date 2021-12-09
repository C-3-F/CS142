//
// Created by c3far on 12/8/2021.
//

#ifndef LAB_8_PLAYLIST_H
#define LAB_8_PLAYLIST_H

#include "Song.h"
#include <vector>

class Playlist {
private:
    string playlistName;
    vector<Song*> songs;
public:
    Playlist();
    Playlist(string name);
    void AddSong(Song* song);
    void RemoveSong(int index);
    void PlayPlaylist();
    vector<Song*> GetSongs();
    string GetName();

};


#endif //LAB_8_PLAYLIST_H
