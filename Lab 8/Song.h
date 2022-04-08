//
// Created by c3far on 12/8/2021.
//

#include <string>
#include <iostream>


#ifndef LAB_8_SONG_H
#define LAB_8_SONG_H

using namespace std;

class Song {
private:
    string songTitle;
    string songFirstLine;
    int timesPlayed;
public:
    Song();

    Song(string title, string firstLine);

    string GetName();

    string GetFirstLine();

    int GetCount();

    void increaseCount();


};


#endif //LAB_8_SONG_H
