//
// Created by c3far on 12/13/2021.
//

#include "ToyNew.h"

using namespace std;

string Toy::GetName() const { return name; }	    // Do NOT change
int Toy::GetNumInStock() const { return numInStock; } // Do NOT change
// TO DO: add the needed implementations of the required methods

Toy::Toy(string toyName, int toyQuantity) {
    if (toyName.length() > 0) {
        name = toyName;
    } else {
        toyName = "unknown";
    }
    SetNumInStock(toyQuantity);
}
void Toy::SetNumInStock(int num) {
    if(num > 0 && num < MAX_IN_STOCK) {
        numInStock = num;
    } else if (num > MAX_IN_STOCK) {
        numInStock = MAX_IN_STOCK;
    } else {

    }
}
void Toy::SetName(string newName) {
    if (newName.length() > 0) {
        name = newName;
    }
}
string Toy::ToString() {
    string outString = to_string(numInStock) + " " + name + " in stock";
    return outString;
}