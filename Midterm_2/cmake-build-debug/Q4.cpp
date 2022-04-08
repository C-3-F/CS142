//
// Created by c3far on 11/9/2021.
//

#include <iostream>
#include <vector>

using namespace std;


void ShowVector(vector<int>& vect) {
    for (int i = 0; i < vect.size(); i++) {
        cout << vect.at(i) << endl;
    }
}

void InvertVector(vector<int>& vect) {
    for (int i = 0; i < vect.size() / 2; i++) {
        int temp = vect.at(i);
        vect.at(i) = vect.at(vect.size() - (i + 1));
        vect.at(vect.size() - (i+1)) = temp;
    }
}


int main () {

    int size;
    int mult;

    cout << "Please enter the size of the vector: ";
    cin >> size;
    cout << "Please input the multiplier: ";
    cin >> mult;

    vector<int> vect(size);

    for (int i = 0; i < vect.size(); i++) {
        vect.at(i) = i * mult;
    }

    ShowVector(vect);
    InvertVector(vect);
    ShowVector(vect);

    return 0;
}