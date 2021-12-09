//
// Created by c3far on 11/24/2021.
//

#include "ShoppingCart.h"

ShoppingCart::ShoppingCart() {
    customerName = "none";
    dateCreated = "January 1, 1970";
}

ShoppingCart::ShoppingCart(string name = "none", string date = "January 1, 1970") {
    customerName = name;
    dateCreated = date;
}

string ShoppingCart::GetName() {
    return customerName;
}

string ShoppingCart::GetDate() {
    return dateCreated;
}

void ShoppingCart::AddItem(ItemToPurchase item) {
    int itemIndex = checkIfItemExists(item.GetName());
    if (itemIndex == -1) {
        items.push_back(item);
    } else {
        cout << "Item is already found in the cart. It will not be added." << endl;
    }

}

void ShoppingCart::RemoveItem(string name) {
    int itemIndex = checkIfItemExists(name);

    if (itemIndex != -1) {
        items.erase(items.begin() + itemIndex);
    } else {
        cout << "Item not found in cart. It will not be removed." << endl;
    }
}

void ShoppingCart::UpdateQuantity(string name, int quantity) {
    int itemIndex = checkIfItemExists(name);
    if (itemIndex != -1) {
        items.at(itemIndex).SetQuantity(quantity);
    } else {
        cout << "Item not found in cart. It will not be modified." << endl;
    }
}

int ShoppingCart::getItemCount() {
    int total = 0;
    for (int i = 0; i < items.size(); i++) {
        total += items.at(i).GetQuantity();
    }
    return total;
}

double ShoppingCart::getTotalCost() {
    double totalCost = 0.0;
    for (int i = 0; i < items.size(); i++) {
        totalCost += items.at(i).GetPrice() * items.at(i).GetQuantity();
    }
    return totalCost;
}

void ShoppingCart::printDescriptions() {
    cout << customerName << "'s Shopping Cart - " << dateCreated << endl;
    if (items.empty()) {
        cout << "Shopping cart is empty." << endl;
        return;
    }
    cout << "Item Descriptions" << endl;
    for (int i = 0; i < items.size(); i++) {
        items.at(i).PrintDescription();
    }
}

void ShoppingCart::printItemTotals() {
    cout << customerName << "'s Shopping Cart - " << dateCreated << endl;
    if (items.empty()) {
        cout << "Shopping cart is empty." << endl;
        return;
    } else {
        cout << "Number of Items: " << getItemCount();
    }
    for (int i = 0; i < items.size(); i++) {
        items.at(i).PrintCost();
    }
    cout << endl << "Total: $" << getTotalCost() << endl;
}

int ShoppingCart::checkIfItemExists(string name) {
    for (int i = 0; i < items.size(); i++) {
        if (items.at(i).GetName() == name) {
            return i;
        }
    }
    return -1;
}
