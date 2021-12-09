#include <iostream>
#include <iomanip>
#include "ItemToPurchase.h"

using namespace std;

void findTotal(ItemToPurchase item1, ItemToPurchase item2) {
    double item1Price = item1.GetPrice() * item1.GetQuantity();
    double item2Price = item2.GetPrice() * item2.GetQuantity();

    cout << endl << "TOTAL COST" << endl;
    cout << fixed << setprecision(2) << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << item1Price << endl;
    cout << fixed << setprecision(2) << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << item2Price << endl << endl;

    cout << "Total: $" << item1Price + item2Price << endl;


}


int main() {
    string name;
    double price;
    int quantity;
    cout << "Item 1" << endl;
    cout << "Enter the item name: ";
    getline(cin,name);
    cout << "Enter the item price: ";
    cin >> price;
    cout << "Enter the item quantity: ";
    cin >> quantity;
    cin.clear();
    cin.ignore();

    ItemToPurchase item1(name,price,quantity);
    name = "";
    price = 0.0;
    quantity = 0;
    cout << endl << "Item 2" << endl;
    cout << "Enter the item name: ";
    getline(cin,name);
    cout << "Enter the item price: ";
    cin >> price;
    cout << "Enter the item quantity: ";
    cin >> quantity;

    ItemToPurchase item2(name,price,quantity);

    findTotal(item1, item2);

    return 0;
}
