#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/* Your code goes here */
string RemoveOdd(string param) {
    for (int i = 1; i < param.size(); i++) {
        param.erase(i,1);
    }
    return param;
}

int main() {
    do {
        if(movesLeft <=0) {
            break;
        }

    } while (movesLeft > 0);


    return 0;
}