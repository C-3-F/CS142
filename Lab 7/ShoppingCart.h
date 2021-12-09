//
// Created by c3far on 11/24/2021.
//

#include <string>
#include <vector>
#include "ItemToPurchase.h"

#ifndef LAB_7_SHOPPINGCART_H
#define LAB_7_SHOPPINGCART_H

using namespace std;

class ShoppingCart {
private:
    string customerName;
    string dateCreated;
    vector<ItemToPurchase> items;

    int checkIfItemExists(string name);

public:
    ShoppingCart();
    ShoppingCart(string name, string date);
    string GetName();
    string GetDate();
    void AddItem(ItemToPurchase item);
    void RemoveItem(string name);
    void UpdateQuantity(string name, int quantity);
    int getItemCount();
    double getTotalCost();
    void printDescriptions();
    void printItemTotals();

};


#endif //LAB_7_SHOPPINGCART_H
