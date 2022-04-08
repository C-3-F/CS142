//
// Created by c3far on 11/15/2021.
//

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase() {
    itemName = "none";
    itemPrice = 0.0;
    itemQuantity = 0;
}

string ItemToPurchase::GetName() {
    return itemName;
}

double ItemToPurchase::GetPrice() {
    return itemPrice;
}

int ItemToPurchase::GetQuantity() {
    return itemQuantity;
}

void ItemToPurchase::SetName(string name) {
    itemName = name;
}

void ItemToPurchase::SetPrice(double price) {
    itemPrice = price;
}

void ItemToPurchase::SetQuantity(int quantity) {
    itemQuantity = quantity;
}

ItemToPurchase::ItemToPurchase(string name = "none", string description = "none", double price = 0, int quantity = 0 ) {
    itemName = name;
    itemPrice = price;
    itemQuantity = quantity;
    itemDescription = description;
}

string ItemToPurchase::GetDescription() {
    return itemDescription;
}

void ItemToPurchase::SetDescription(string description) {
    itemDescription = description;
}

void ItemToPurchase::PrintCost() {
    cout << fixed << setprecision(2) << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << itemQuantity * itemPrice << endl;
}

void ItemToPurchase::PrintDescription() {
    cout << itemName << ": " << itemDescription << endl;
}
