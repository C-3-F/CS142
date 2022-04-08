//
// Created by c3far on 12/8/2021.
//

#include "Song.h"

Song::Song() {
    songTitle = "None";
    songFirstLine = "None";
    timesPlayed = 0;
}

Song::Song(string title, string firstLine) {
    songTitle = title;
    songFirstLine = firstLine;
    timesPlayed = 0;
}

string Song::GetName() {
    return songTitle;
}

string Song::GetFirstLine() {
    return songFirstLine;
}

int Song::GetCount() {
    return timesPlayed;
}

void Song::increaseCount() {
    timesPlayed++;
}
