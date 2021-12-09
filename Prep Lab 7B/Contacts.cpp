//
// Created by c3far on 12/3/2021.
//

#include "Contacts.h"

ContactNode::ContactNode(string name, string phone) {
    contactName = name;
    contactPhoneNum = phone;
}


void ContactNode::InsertAfter(ContactNode *ptr) {
    nextNodePtr = ptr;
}

string ContactNode::GetName() {
    return contactName;
}

string ContactNode::GetPhoneNumber() {
    return contactPhoneNum;
}

ContactNode *ContactNode::GetNext() {
    return nextNodePtr;
}

void ContactNode::PrintContactNode() {
    cout << "Name: " << contactName << endl;
    cout << "Phone number: " << contactPhoneNum << endl << endl;

}
