#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;


string validInputValuesToString(vector<int>values);
int getUserInput(const string& prompt, const vector<int>&validInputValues);
bool validateInput(vector<int>validInputValues, int userValue);

string getRandGirlProfile();

void goToWilk();
void goToLibrary();
void goSitDown();
void goToGroup();
void printDateSuccess();

int main() {

    bool isPlaying = true;
    while(isPlaying) {
        cout << "--- Welcome to this adventure!! ---" << endl << endl;
        cout << "Let's begin! " << endl;

        string initialOption = "You are a BYU student desperately trying to find a date for the weekend. It's Friday afternoon and you still have nothing. Do you go to 1) the Library or 2) the Wilk?";
        vector<int> initialOptions{1, 2};
        int firstDecision = getUserInput(initialOption, initialOptions);

        if (firstDecision == 1) {
            goToLibrary();
        }
        if (firstDecision == 2) {
            goToWilk();
        }

        cout << endl << "--------------------" << endl << "Game Over. Thanks for playing" << endl;
        string playAgainPrompt = "Would you like to play again?\n1) Yes, 2) No";

        int playAgain = getUserInput(playAgainPrompt, initialOptions);
        if (playAgain != 1) {
            isPlaying = false;
        }
    }
    return 0;
}


string validInputValuesToString(vector<int>values) {
    string valueString;
    for (int i = 0; i < values.size(); i++) {
        valueString += to_string(values[i]);
        if(i != values.size() - 1) {
            valueString += " ";
        }

    }
    return valueString;
}


int getUserInput(const string& prompt, const vector<int>&validInputValues) {

    int userInput = -1;

    cout << prompt << endl;
    cout << "Options: [" << validInputValuesToString(validInputValues) << "] -- Your answer : ";
    cin >> userInput;

    if(!validateInput(validInputValues, userInput)) {
        while(!validateInput(validInputValues, userInput)) {
            cout << endl << "That is not a valid option. Please enter one of the following: [" << validInputValuesToString(validInputValues) << "] : ";
            cin.clear();
            cin.ignore(INT32_MAX, '\n');
            cin >> userInput;
        }
    }

    cout << endl << "----------------------------------" << endl << endl;
    return userInput;
}

bool validateInput(vector<int>validInputValues, int userValue) {
    bool isValid = false;
    for (int i = 0; i < validInputValues.size(); i++) {
        if (userValue == validInputValues[i]) {
            isValid = true;
        }
    }
    return isValid;
}


string getRandGirlProfile() {
    srand(time(NULL));
    int hairColor = rand() % 3;
    int height = rand() % 2;
    int adjective = rand() % 4;

    string hairColorString;
    string heightString;
    string adjectiveString;

    if (hairColor == 0) {
        hairColorString = "brown";
    } else if (hairColor == 1) {
        hairColorString = "blonde";
    } else {
        hairColorString = "red";
    }

    if (height == 0) {
        heightString = "short";
    } else {
        heightString = "tall";
    }

    if (adjective == 0) {
        adjectiveString = "beautiful";
    } else if (adjective == 1) {
        adjectiveString = "pretty";
    } else if (adjective == 2) {
        adjectiveString = "cute";
    } else {
        adjectiveString = "nice";
    }

    return adjectiveString + ", " + heightString + ", " + hairColorString + "-haired girl";

}


void goToWilk() {
    string prompt = "You take your usual seat by the main walkway where you can people watch. After a little bit, an acquaintance from high school walks by that you haven't seen in ages. She is a " + getRandGirlProfile() + ". You start talking and reminiscing on old memories. You can:\n1) Try to ask her out or 2) End the conversation and say goodbye";
    vector<int> options {1, 2};
    int decision = getUserInput(prompt, options);
    if (decision == 1) {
        printDateSuccess();
    } else {
        cout << "You didn't realize how much time you spent talking to this girl and now no one is left in the Wilk. And you have no date. Oof." << endl;
    }

 }

void goToLibrary() {
    string prompt = "You walk down the stairs and survey the reading room. There's a big group of people in one corner and a bunch of empty seats in the other. Do you:\n1) Go sit alone or 2) go to the big group of people" ;
    vector<int> options {1,2};
    int decision = getUserInput(prompt, options);
    if (decision == 1) {
        goSitDown();
    } else {
        goToGroup();
    }

}

void goSitDown() {
    vector<int> options {1,2};
    string prompt2 = "You take a seat on one of the nice cushy couches and after a couple of minutes a " + getRandGirlProfile() + " comes up and sits by you. She's got airpods in (isn't that the worst). Do you\n1) Pretend like you need help with your calc homework and ask her or 2) Freak out and don't say anything.";
    int decision = getUserInput(prompt2,options);
    if (decision == 1) {
        printDateSuccess();
    } else {
        cout << "She eventually leaves and you regret your life decisions. No date." << endl;
    }
}

void goToGroup() {
    vector<int> options {1,2};
    string prompt2 = "You go up to the big group of people and there's lots of cute girls there including a " + getRandGirlProfile() + ". Do you:\n1) Man up and go talk to one of them or 2)Wimp out and go back to the wilk?";
    int decision = getUserInput(prompt2,options);
    if (decision == 1) {
        printDateSuccess();
    } else {
        goToWilk();
    }
}

void printDateSuccess() {
    cout << "You find this really cool girl that you hit it off with! You get her number and ask her out. Congrats, you've got a date!" << endl;
}