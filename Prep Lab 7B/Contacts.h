//
// Created by c3far on 12/3/2021.
//
#include <string>
#include <iostream>

using namespace std;

#ifndef PREP_LAB_7B_CONTACTS_H
#define PREP_LAB_7B_CONTACTS_H


class ContactNode {
public:
    ContactNode(string name, string phone);
    void InsertAfter(ContactNode* ptr);
    string GetName();
    string GetPhoneNumber();
    ContactNode* GetNext();
    void PrintContactNode();
private:
    string contactName;
    string contactPhoneNum;
    ContactNode* nextNodePtr = nullptr;

};


#endif //PREP_LAB_7B_CONTACTS_H
