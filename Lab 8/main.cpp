//A Note regarding 'using namespace std':
// The author of this code prefers to not have the line 'using namespace std;'
// Instead, you will see 'std::' in front of string, cout, and other identifiers
// You could put 'using namespace std;' at the top of your code and not need 'std::' in front of these words,
// but many people consider it better practice to not have 'using namespace std;'


#include <iostream>
#include <string>
#include <vector>

//TODO: Include your class files here
#include "Song.h"
#include "Playlist.h"


// TODO: clean up memory when it is no longer used
//  (you need to find the appropriate places in the code to do this)

std::string GetUserString(const std::string& prompt);
int GetUserInt(const std::string& prompt);
void printLibrary(vector<Song*> library);
void printSongIndexes(vector<Song*> library);
void printSongsInPlaylist(Playlist* playlist);
void printPlaylists(vector<Playlist*> playlists);


int main() {
   std::cout << "Welcome to the Firstline Player!  Enter options to see menu options." << std::endl << std::endl;

   //TODO: Create vectors to hold the songs and playlists
   vector<Song*> allSongs;
   vector<Playlist*> allPlaylists;

   std::string userMenuChoice = "none";
   bool continueMenuLoop = true;

   while (continueMenuLoop) {
      userMenuChoice = GetUserString("Enter your selection now: ");

      if (userMenuChoice == "add") {
         const std::string DONE_KEYWORD = "DONE";
         std::cout << "Enter songs' names and first lines"
                  << " (type \"" << DONE_KEYWORD << "\" when done):" << std::endl;

         std::string songName = "none";
         std::string firstLine = "none";

         songName = GetUserString("Song Name: ");
         while (songName != DONE_KEYWORD) {
            firstLine = GetUserString("Song's first line: ");

            //TODO: Create a Song using `songName` and `firstLine` and add it to allSongs
            Song* newSong = new Song(songName, firstLine);
            allSongs.push_back(newSong);

            songName = GetUserString("Song Name: ");
         }
      }
      else if (userMenuChoice == "list") {
          printLibrary(allSongs);
      }
      else if (userMenuChoice == "addp") {
         string playlistName = GetUserString("Playlist Name: ");
         Playlist* newPlaylist = new Playlist(playlistName);
         allPlaylists.push_back(newPlaylist);
      }
      else if (userMenuChoice == "addsp") {
          printPlaylists(allPlaylists);
          int playlistIndex = GetUserInt("Pick a playlist index number: ");
          printSongIndexes(allSongs);
          int songIndex = GetUserInt("Pick a song index number: ");
          allPlaylists.at(playlistIndex)->AddSong(allSongs.at(songIndex));
      }
      else if (userMenuChoice == "listp") {
          printPlaylists(allPlaylists);
      }
      else if (userMenuChoice == "play") {
         //TODO: Implement this menu option
          printPlaylists(allPlaylists);

      }
      else if (userMenuChoice == "remp") {
         //TODO: Implement this menu option
      }
      else if (userMenuChoice == "remsp") {
         //TODO: Implement this menu option
      }
      else if (userMenuChoice == "remsl") {
         //TODO: Implement this menu option
      }
      else if (userMenuChoice == "options") {
         std::cout << "add      Adds a list of songs to the library" << std::endl
            << "list     Lists all the songs in the library" << std::endl
            << "addp     Adds a new playlist" << std::endl
            << "addsp    Adds a song to a playlist" << std::endl
            << "listp    Lists all the playlists" << std::endl
            << "play     Plays a playlist" << std::endl
            << "remp     Removes a playlist" << std::endl
            << "remsp    Removes a song from a playlist" << std::endl
            << "remsl    Removes a song from the library (and all playlists)" << std::endl
            << "options  Prints this options menu" << std::endl
            << "quit     Quits the program" << std::endl << std::endl;
      }
      else if (userMenuChoice == "quit") {
         std::cout << "Goodbye!" << std::endl;
         continueMenuLoop = false;
      }
      else {
         std::cout << "add      Adds a list of songs to the library" << std::endl
            << "list     Lists all the songs in the library" << std::endl
            << "addp     Adds a new playlist" << std::endl
            << "addsp    Adds a song to a playlist" << std::endl
            << "listp    Lists all the playlists" << std::endl
            << "play     Plays a playlist" << std::endl
            << "remp     Removes a playlist" << std::endl
            << "remsp    Removes a song from a playlist" << std::endl
            << "remsl    Removes a song from the library (and all playlists)" << std::endl
            << "options  Prints this options menu" << std::endl
            << "quit     Quits the program" << std::endl << std::endl;
      }
   }

   return 0;
}


std::string GetUserString(const std::string& prompt) {
   std::string userAnswer = "none";

   std::cout << prompt;
   std::getline(std::cin, userAnswer);
   std::cout << std::endl;
   return userAnswer;
}
int GetUserInt(const std::string& prompt) {
   int userAnswer = 0;

   std::cout << prompt;
   std::cin >> userAnswer;
   std::cin.ignore();
   std::cout << std::endl;
   return userAnswer;
}

void printLibrary(vector<Song*> library) {
    for (int i = 0; i < library.size(); i++) {
        cout << library.at(i)->GetName() << ": \"" << library.at(i)->GetFirstLine() << "\", " << library.at(i)->GetCount() << " play(s)." << endl;
    }
}

void printSongIndexes(vector<Song *> library) {
    for (int i = 0; i < library.size(); i++) {
        cout << i << ": " << library.at(i)->GetName() << endl;
    }
}

void printSongsInPlaylist(Playlist *playlist) {

}

void printPlaylists(vector<Playlist*> playlists) {
    for (int i = 0; i < playlists.size(); i++) {
        cout << i << ": " << playlists.at(i)->GetName() << endl;
    }
}

