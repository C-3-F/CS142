#include <iostream>
#include "Toy.h"

using namespace std;

int main() {
    Toy truck("truck", 8);
    Toy blocks("blocks", 19);

    cout << truck.ToString() << endl;
    cout << blocks.ToString() << endl;

    blocks.SetName("Blocks Plus");
    cout << blocks.ToString() << endl;

    cout << "How many more trucks would you like to stock? ";
    int newQuantity;
    cin >> newQuantity;

    truck.SetNumInStock(truck.GetNumInStock() + newQuantity);

    cout << truck.ToString() << endl;

    return 0;
}
