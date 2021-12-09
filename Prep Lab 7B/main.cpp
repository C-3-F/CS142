#include <iostream>
#include "Contacts.h"


int main() {

    ContactNode* lastptr = nullptr;
    ContactNode* head = nullptr;

    for (int i = 0; i < 3; i++) {
        string name;
        string number;
        cout << "Person " << i + 1 << endl;
        cout << "Enter name: ";
        getline(cin, name);
        cout << endl <<"Enter phone number: ";
        getline(cin, number);
        cout << endl << "You entered: " << name << ", " << number << endl << endl;

        ContactNode* contact = new ContactNode(name, number);
        if (i == 0) {
            head = contact;
        } else {
            lastptr->InsertAfter(contact);
        }

        lastptr = contact;
    }

    cout << "CONTACT LIST" << endl;

    ContactNode* current = head;

    while (current != nullptr) {
        current->PrintContactNode();
        current = current->GetNext();
    }


    return 0;
}
