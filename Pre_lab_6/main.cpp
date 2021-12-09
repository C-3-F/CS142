#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void player1Turn(vector<string>& opposingShips);
void player2Turn(vector<string>& opposingShips);
bool checkForWinner(const vector<string>& opposingPlayerShips);


int main() {

    vector<string> player1Ships;
    vector<string> player2Ships;

    cout << "Enter Player 1's chosen coordinates: ";

    for (int i = 0; i < 6; i++) {
        string temp;
        cin >> temp;
        player1Ships.push_back(temp);
    }

    cout << "Enter Player 2's chosen coordinates: ";

    for (int i = 0; i < 6; i++) {
        string temp;
        cin >> temp;
        player2Ships.push_back(temp);
    }

    while (true) {
        cout << endl;
        player1Turn(player2Ships);
        if(checkForWinner(player2Ships)) {
            cout << "Player 1 is the winner. Their unsunk ships were at:";
            for (int i = 0; i<player1Ships.size(); i++) {
                cout << " " << player1Ships.at(i);
            }
            cout << endl;
            break;
        }
        cout << endl;
        player2Turn(player1Ships);
        if(checkForWinner(player1Ships)) {
            cout << "Player 2 is the winner. Their unsunk ships were at:";
            for (int i = 0; i<player2Ships.size(); i++) {
                cout << " " << player2Ships.at(i);
            }
            cout << endl;
            break;
        }
    }



    return 0;
}


void player1Turn(vector<string>& opposingShips) {
    cout << "It is player 1's turn. Enter a guess: ";
    string guess;
    cin >> guess;
    auto vectIt = find(opposingShips.begin(), opposingShips.end(), guess);
    if(vectIt != opposingShips.end()) {
        cout << " " << guess << " was a hit!";
        opposingShips.erase(vectIt);
    } else {
        cout << " " << guess << " was a miss.";
    }
}

void player2Turn(vector<string>& opposingShips) {
    cout << "It is player 2's turn. Enter a guess: ";
    string guess;
    cin >> guess;
    auto vectIt = find(opposingShips.begin(), opposingShips.end(), guess);
    if(vectIt != opposingShips.end()) {
        cout << " " << guess << " was a hit!";
        opposingShips.erase(vectIt);
    } else {
        cout << " " << guess << " was a miss.";
    }
}

bool checkForWinner(const vector<string>& opposingPlayerShips) {
    return opposingPlayerShips.empty();
}
