//
// Created by c3far on 11/15/2021.
//

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

#ifndef LAB_7_ITEMTOPURCHASE_H
#define LAB_7_ITEMTOPURCHASE_H


class ItemToPurchase {


private:
    string itemName;
    double itemPrice;
    int itemQuantity;
    string itemDescription;

public:
    ItemToPurchase();
    ItemToPurchase(string name, string description, double price, int quantity);
    string GetName();
    double GetPrice();
    int GetQuantity();
    string GetDescription();
    void SetName(string name);
    void SetPrice(double price);
    void SetQuantity(int quantity);
    void SetDescription(string description);

    void PrintCost();
    void PrintDescription();

};


#endif //LAB_7_ITEMTOPURCHASE_H
